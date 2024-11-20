


#include "HAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "HAIBaseComponent.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Damage.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"

AHAIController::AHAIController(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))//Setting CrowdFollowingComponent as the default path following component
{
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	SetPerceptionComponent(*AIPerceptionComponent);//Setting the perception component of the AI controller

	//Creating the sense configurations of the AI character and setting their default values
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	SightConfig->SightRadius = 0.f;
	SightConfig->LoseSightRadius = 0.f;
	SightConfig->PeripheralVisionAngleDegrees = 0.f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = false;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = false;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = false;
	SightConfig->SetMaxAge(0.f);
	
	HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingConfig"));
	HearingConfig->HearingRange = 0.f;
	HearingConfig->DetectionByAffiliation.bDetectEnemies = false;
	HearingConfig->DetectionByAffiliation.bDetectNeutrals = false;
	HearingConfig->DetectionByAffiliation.bDetectFriendlies = false;
	HearingConfig->SetMaxAge(0.f);
	
	DamageConfig = CreateDefaultSubobject<UAISenseConfig_Damage>(TEXT("DamageConfig"));
	DamageConfig->SetMaxAge(0.f);

	//Configuring the sense configurations of the AI character
	AIPerceptionComponent->ConfigureSense(*SightConfig);
	AIPerceptionComponent->ConfigureSense(*HearingConfig);
	AIPerceptionComponent->ConfigureSense(*DamageConfig);

	AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());//Setting the dominant sense of the AI controller
	
	AIPerceptionComponent->OnPerceptionUpdated.AddDynamic(this, &AHAIController::OnPerceptionUpdated);//Binding the OnPerceptionUpdated function to the OnPerceptionUpdated event

	CrowdFollowingComponent = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent());//Casting the path following component to the CrowdFollowingComponent
	CrowdFollowingComponent->SetCrowdAnticipateTurns(true); //default false
	CrowdFollowingComponent->SetCrowdObstacleAvoidance(true);
	CrowdFollowingComponent->SetCrowdSeparation(true); //default false
	CrowdFollowingComponent->SetCrowdOptimizeVisibility(true);
	CrowdFollowingComponent->SetCrowdOptimizeTopology(true);
	CrowdFollowingComponent->SetCrowdPathOffset(true);
	CrowdFollowingComponent->SetCrowdSlowdownAtGoal(false); //default true
	CrowdFollowingComponent->SetCrowdSeparationWeight(2.0f);
	CrowdFollowingComponent->SetCrowdCollisionQueryRange(400.0f);
	CrowdFollowingComponent->SetCrowdPathOptimizationRange(2000.0f);
	CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::High);
	CrowdFollowingComponent->SetCrowdAvoidanceRangeMultiplier(1.0f);
	CrowdFollowingComponent->SetCrowdAffectFallingVelocity(false);
	CrowdFollowingComponent->SetCrowdRotateToVelocity(true);
}


// Called when the AI controller possesses a pawn
void AHAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	HAIBaseComponent = Cast<UHAIBaseComponent>(InPawn->GetComponentByClass(UHAIBaseComponent::StaticClass()));
	if(HAIBaseComponent)
	{
		if(HAIBaseComponent->OpenSight)//If in HAIBaseComponent the OpenSight is true
		{
			SightConfig->SightRadius = HAIBaseComponent->SightRadius;
			SightConfig->LoseSightRadius = HAIBaseComponent->LoseSightRadius;
			SightConfig->PeripheralVisionAngleDegrees = HAIBaseComponent->PeripheralVisionAngleDegrees;
			SightConfig->DetectionByAffiliation.bDetectEnemies = true;
			SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
			SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
			SightConfig->SetMaxAge(HAIBaseComponent->MaxAgeForSight);
			
			AIPerceptionComponent->ConfigureSense(*SightConfig);
		}
		else
		{
			SightConfig->SightRadius = 0.f;
			SightConfig->LoseSightRadius = 0.f;
			SightConfig->PeripheralVisionAngleDegrees = 0.f;
			SightConfig->DetectionByAffiliation.bDetectEnemies = false;
			SightConfig->DetectionByAffiliation.bDetectNeutrals = false;
			SightConfig->DetectionByAffiliation.bDetectFriendlies = false;
			SightConfig->SetMaxAge(0.f);

			AIPerceptionComponent->ConfigureSense(*SightConfig);
		}
		if(HAIBaseComponent->OpenHear)//If in HAIBaseComponent the OpenHear is true
		{
			HearingConfig->HearingRange = HAIBaseComponent->HearingRange;
			HearingConfig->SetMaxAge(HAIBaseComponent->MaxAgeHear);
			HearingConfig->DetectionByAffiliation.bDetectEnemies = true;
			HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;
			HearingConfig->DetectionByAffiliation.bDetectFriendlies = true;
			AIPerceptionComponent->ConfigureSense(*HearingConfig);
		}
		else
		{
			HearingConfig->HearingRange = 0.f;
			HearingConfig->SetMaxAge(0.f);
			HearingConfig->DetectionByAffiliation.bDetectEnemies = false;
			HearingConfig->DetectionByAffiliation.bDetectNeutrals = false;
			HearingConfig->DetectionByAffiliation.bDetectFriendlies = false;
			AIPerceptionComponent->ConfigureSense(*HearingConfig);
		}
		if(HAIBaseComponent->OpenDamage)//If in HAIBaseComponent the OpenDamage is true
		{
			DamageConfig->SetMaxAge(HAIBaseComponent->MaxAgeDamage);
			AIPerceptionComponent->ConfigureSense(*DamageConfig);
		}
		else
		{
			DamageConfig->SetMaxAge(0.f);
			AIPerceptionComponent->ConfigureSense(*DamageConfig);
		}
		switch (HAIBaseComponent->DominantSense)//Set the dominant sense of the AI controller
		{
			case E_DominantSense::Sight:
				AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
				break;
			case E_DominantSense::Hearing:
				AIPerceptionComponent->SetDominantSense(HearingConfig->GetSenseImplementation());
				break;
			case E_DominantSense::Damage:
				AIPerceptionComponent->SetDominantSense(DamageConfig->GetSenseImplementation());
				break;
		}
	}
	if(HAIBaseComponent && HAIBaseComponent->BehaviorTree)
	{
		RunBehaviorTree(HAIBaseComponent->BehaviorTree);
		targetsTag = HAIBaseComponent->targetsTag;
		SetStateAsPassive();
	}
}

// Called when the perception of the AI controller is updated
void AHAIController::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{
	for(AActor* sensedActor : UpdatedActors)//Loop for each actor sensed by the AI controller
	{
		if(targetsTag.Num() == 0)//If the AI character has no target tag
		{
			HandleSense(sensedActor);
			targetActor = sensedActor;
		}
		for(FName tag : targetsTag)//Loop for each target tag of the AI character
		{
			if(sensedActor->ActorHasTag(tag))//Check if the sensed actor has the target tag
			{
				HandleSense(sensedActor);
				targetActor = sensedActor;
			}
		}
	}
}

// Check if the AI character sensed something
bool AHAIController::PlayerSensed(AActor* sensedActor, E_SenseType senseType)
{
	FActorPerceptionBlueprintInfo perceptionInfo;//The perception info of the AI character
	AIPerceptionComponent->GetActorsPerception(sensedActor, perceptionInfo);//Getting the perception info of the AI character
	FAISenseID senseID;

	switch (senseType)//Set the sense ID according to the sense type
	{
		case E_SenseType::see:senseID = UAISense::GetSenseID<UAISenseConfig_Sight>(); break;
		case E_SenseType::hear:senseID = UAISense::GetSenseID<UAISenseConfig_Hearing>(); break;
		case E_SenseType::damage:senseID = UAISense::GetSenseID<UAISenseConfig_Damage>(); break;
	}

	for(const auto& stimulus : perceptionInfo.LastSensedStimuli)//Loop for each stimulus sensed by the AI character
	{
		if(stimulus.Type == senseID)//Check if the AI character sensed the player
		{
			pointOfInterest = stimulus.StimulusLocation;
			return stimulus.WasSuccessfullySensed();
		}
	}
	return false;
}

// Handle the sense of the AI character
void AHAIController::HandleSense(AActor* sensedTargetActor)
{
	E_OnPossessState currentState = GetCurrentState();
	
	if(PlayerSensed(sensedTargetActor,E_SenseType::see))//If the AI character sees the player
	{
		if(currentState != E_OnPossessState::active)//If the AI character is not  active
		{
			targetActor = sensedTargetActor;//Set the target actor as the sensed target actor
			SetStateAsActive();//Set the state of the AI character as active
		}
	}
	else if(PlayerSensed(sensedTargetActor,E_SenseType::hear) || PlayerSensed(sensedTargetActor,E_SenseType::damage))//If the AI character hears the player
	{
		if(currentState != E_OnPossessState::active)//If the AI character is not  active
		{
			SetStateAsInvestigate();//Set the state of the AI character as investigate
		}
	}
	else//If the AI character loses the sense of the target
	{
		SetStateAsInvestigate();//Loose the sense of the AI character
	}
}

// Get the current state of the AI character
E_OnPossessState AHAIController::GetCurrentState()
{
	return (E_OnPossessState)GetBlackboardComponent()->GetValueAsEnum("OnPossessState");
}


// Set the state of the AI character as passive
void AHAIController::SetStateAsPassive()
{
	GetBlackboardComponent()->SetValueAsEnum("OnPossessState",(uint8)E_OnPossessState::passive);
	targetActor = nullptr;
	pointOfInterest = FVector::ZeroVector;
}

// Set the state of the AI character as investigate
void AHAIController::SetStateAsInvestigate()
{
	GetBlackboardComponent()->SetValueAsEnum("OnPossessState",(uint8)E_OnPossessState::investigate);
	GetBlackboardComponent()->SetValueAsVector("pointOfInterest",pointOfInterest);
}

// Set the state of the AI character as active
void AHAIController::SetStateAsActive()
{
	GetBlackboardComponent()->SetValueAsEnum("OnPossessState",(uint8)E_OnPossessState::active);
	GetBlackboardComponent()->SetValueAsObject("targetActor",targetActor);
}


// Stop the behavior tree of the AI character
void AHAIController::StopBehaviorTree()
{
	CleanupBrainComponent();
}
