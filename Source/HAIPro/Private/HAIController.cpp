
#include "HAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "HAIBaseComponent.h"
#include "Components/StateTreeAIComponent.h"

AHAIController::AHAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("CrowdFollowingComponent")))
{
	CrowdFollowing = CreateDefaultSubobject<UCrowdFollowingComponent>(TEXT("CrowdManager"));
	
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	SetPerceptionComponent(*AIPerceptionComponent);

	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTreeComponent"));
	StateTreeAIComponent = CreateDefaultSubobject<UHStateTreeAIComponent>(TEXT("StateTreeAIComponent"));
}

void AHAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	HAIBaseComponent = Cast<UHAIBaseComponent>(InPawn->GetComponentByClass(UHAIBaseComponent::StaticClass()));
	if (!HAIBaseComponent)
		return;
	
	AIPerceptionComponent->OnTargetPerceptionForgotten.AddDynamic(this, &AHAIController::OnTargetPerceptionForgotten);
	AIPerceptionComponent->OnTargetPerceptionInfoUpdated.AddDynamic(this, &AHAIController::OnTargetPerceptionInfoUpdated);
	
	if (HAIBaseComponent->bEnableSight)
		OpenSightConfig();
	if (HAIBaseComponent->bEnableHearing)
		OpenHearingConfig();
	if (HAIBaseComponent->bEnableDamage)
		OpenDamageConfig();
	
	AIPerceptionComponent->RequestStimuliListenerUpdate(); 
	SetDominantSense();
	if (HAIBaseComponent->bStartBehaviorTreeOnBeginPlay)
		StartBehaviorTree();

	if (HAIBaseComponent->bStartStateTreeOnBeginPlay)
		StartStateTree();
}

void AHAIController::OpenSightConfig()
{
	SightConfig = NewObject<UAISenseConfig_Sight>(AIPerceptionComponent, TEXT("SightConfig"));
	if (!SightConfig)
		return;
	
	SightConfig->SightRadius = HAIBaseComponent->SightRadius;
	SightConfig->LoseSightRadius = HAIBaseComponent->LoseSightRadius;
	SightConfig->SetMaxAge(HAIBaseComponent->SightAge);
	SightConfig->DetectionByAffiliation.bDetectEnemies = HAIBaseComponent->bDetectEnemies;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = HAIBaseComponent->bDetectNeutrals;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = HAIBaseComponent->bDetectFriendlies;
	AIPerceptionComponent->ConfigureSense(*SightConfig);
}

void AHAIController::OpenHearingConfig()
{
	HearingConfig = NewObject<UAISenseConfig_Hearing>(AIPerceptionComponent, TEXT("HearingConfig"));
	if (!HearingConfig)
		return;
	
	HearingConfig->HearingRange = HAIBaseComponent->HearingRange;
	HearingConfig->SetMaxAge(HAIBaseComponent->HearingAge);
	HearingConfig->DetectionByAffiliation.bDetectEnemies = HAIBaseComponent->bDetectHearingEnemies;
	HearingConfig->DetectionByAffiliation.bDetectNeutrals = HAIBaseComponent->bDetectHearingNeutrals;
	HearingConfig->DetectionByAffiliation.bDetectFriendlies = HAIBaseComponent->bDetectHearingFriendlies;
	AIPerceptionComponent->ConfigureSense(*HearingConfig);
}

void AHAIController::OpenDamageConfig()
{
	DamageConfig = NewObject<UAISenseConfig_Damage>(AIPerceptionComponent, TEXT("DamageConfig"));
	if (!DamageConfig)
		return;
	
	DamageConfig->SetMaxAge(HAIBaseComponent->DamageAge);
	AIPerceptionComponent->ConfigureSense(*DamageConfig);
}

void AHAIController::SetDominantSense()
{
	switch (HAIBaseComponent->DominantSense)
	{
	case E_DominantSense::Sight:
		if (SightConfig)
			AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
		break;
	case E_DominantSense::Hearing:
		if (HearingConfig)
			AIPerceptionComponent->SetDominantSense(HearingConfig->GetSenseImplementation());
		break;
	case E_DominantSense::Damage:
		if (DamageConfig)
			AIPerceptionComponent->SetDominantSense(DamageConfig->GetSenseImplementation());
		break;
	default:
		if (SightConfig)
			AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
		break;
	}
}

void AHAIController::OnUnPossess()
{
	Super::OnUnPossess();
	AIPerceptionComponent->OnTargetPerceptionForgotten.RemoveDynamic(this, &AHAIController::OnTargetPerceptionForgotten);
	AIPerceptionComponent->OnTargetPerceptionInfoUpdated.RemoveDynamic(this, &AHAIController::OnTargetPerceptionInfoUpdated);
}

//-------------------------------------------------

void AHAIController::OnTargetPerceptionForgotten(AActor* Actor)
{
	HAIBaseComponent->OnSenseActorForgotten.Broadcast(Actor);
}

void AHAIController::OnTargetPerceptionInfoUpdated(const FActorPerceptionUpdateInfo& UpdateInfo)
{
	F_SenseData SenseData;
	SenseData.sensedActor = UpdateInfo.Target;
	SenseData.stimulus = UpdateInfo.Stimulus;
	FAISenseID SenseID = UpdateInfo.Stimulus.Type;
		
	if (SenseID == UAISense::GetSenseID<UAISense_Sight>())
		SenseData.senseType = E_SenseType::SightConfig;
	else if (SenseID == UAISense::GetSenseID<UAISense_Hearing>())
		SenseData.senseType = E_SenseType::HearingConfig;
	else if (SenseID == UAISense::GetSenseID<UAISense_Damage>())
		SenseData.senseType = E_SenseType::DamageConfig;
	
	HAIBaseComponent->OnPerceptionConfigUpdated.Broadcast(SenseData);
}

//-------------------------------------------------

void AHAIController::SetTargetActor(AActor* newTarget, E_SenseType newSenseType, FAIStimulus newStimulus)
{
	if (!newTarget)
		return;
	TargetActor = newTarget;
	TargetStimulus = newStimulus;
	if (newSenseType == E_SenseType::NoneType)
		newSenseType = newStimulus.Type == UAISense::GetSenseID<UAISense_Sight>() ? E_SenseType::SightConfig :
			newStimulus.Type == UAISense::GetSenseID<UAISense_Hearing>() ? E_SenseType::HearingConfig :
			newStimulus.Type == UAISense::GetSenseID<UAISense_Damage>() ? E_SenseType::DamageConfig : E_SenseType::NoneType;
	
	TargetSenseType = newSenseType;
	if (TargetActor.Get())
		TargetActor->OnDestroyed.AddDynamic(this, &AHAIController::OnTargetActorDestroyed);
}

void AHAIController::OnTargetActorDestroyed(AActor* DestroyedActor)
{
	if (DestroyedActor == TargetActor.Get())
	{
		TargetStimulus = FAIStimulus();
		TargetLocation = FVector::ZeroVector;
		TargetSenseType = E_SenseType::NoneType;
	}
}

void AHAIController::SetTargetLocation(const FVector& newLocation, E_SenseType newSenseType, FAIStimulus newStimulus)
{
	TargetLocation = newLocation;
	TargetStimulus = newStimulus;
	if (newSenseType == E_SenseType::NoneType)
		newSenseType = newStimulus.Type == UAISense::GetSenseID<UAISense_Sight>() ? E_SenseType::SightConfig :
			newStimulus.Type == UAISense::GetSenseID<UAISense_Hearing>() ? E_SenseType::HearingConfig :
			newStimulus.Type == UAISense::GetSenseID<UAISense_Damage>() ? E_SenseType::DamageConfig : E_SenseType::NoneType;
	
	TargetSenseType = newSenseType;
}

void AHAIController::SetNullTargetLocation()
{
	TargetLocation = FVector::ZeroVector;
	TargetStimulus = FAIStimulus();
	TargetSenseType = E_SenseType::NoneType;
}

void AHAIController::SetNullTargetActor()
{
	TargetActor = nullptr;
	TargetStimulus = FAIStimulus();
	TargetSenseType = E_SenseType::NoneType;
}



void AHAIController::StartBehaviorTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->BehaviorTree || !BehaviorTreeComponent)
		return;
	RunBehaviorTree(HAIBaseComponent->BehaviorTree);
}

void AHAIController::StopBehaviorTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->BehaviorTree || !BehaviorTreeComponent)
		return;
	BehaviorTreeComponent->StopLogic(TEXT("Stopped by AHAIController"));
}

void AHAIController::PauseBehaviorTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->BehaviorTree || !BehaviorTreeComponent)
		return;
	BehaviorTreeComponent->PauseLogic(TEXT("Paused by AHAIController"));
}

void AHAIController::ResumeBehaviorTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->BehaviorTree || !BehaviorTreeComponent)
		return;
	BehaviorTreeComponent->ResumeLogic(TEXT("Resumed by AHAIController"));
}

void AHAIController::RestartBehaviorTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->BehaviorTree || !BehaviorTreeComponent)
		return;
	BehaviorTreeComponent->RestartLogic();
}

void AHAIController::DestroyBehaviorTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->BehaviorTree || !BehaviorTreeComponent)
		return;
	BehaviorTreeComponent->Cleanup();
}


void AHAIController::StartStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;
	FStateTreeReference* StateTree = StateTreeAIComponent->GetStateTree();
	
	StateTree->SetStateTree(HAIBaseComponent->StateTree);
	StateTreeAIComponent->StartLogic();
}

void AHAIController::StopStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;
	FStateTreeReference* StateTree = StateTreeAIComponent->GetStateTree();
	StateTreeAIComponent->StopLogic(TEXT("Stopped by AHAIController"));
}

void AHAIController::PauseStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;
	FStateTreeReference* StateTree = StateTreeAIComponent->GetStateTree();
	StateTreeAIComponent->PauseLogic(TEXT("Paused by AHAIController"));
}

void AHAIController::ResumeStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;
	FStateTreeReference* StateTree = StateTreeAIComponent->GetStateTree();
	StateTreeAIComponent->ResumeLogic(TEXT("Resumed by AHAIController"));
}

void AHAIController::RestartStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;
	FStateTreeReference* StateTree = StateTreeAIComponent->GetStateTree();
	StateTreeAIComponent->RestartLogic();
}

void AHAIController::DestroyStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;
	FStateTreeReference* StateTree = StateTreeAIComponent->GetStateTree();
	StateTreeAIComponent->Cleanup();
}
