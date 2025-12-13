# HAIPro Documentation 📝

Advanced AI plugin with a ready to use perception system, runtime control of Behavior Trees and State Trees from a single component, token based NPC task prioritization, and example tasks for both Behavior Tree and State Tree.

## Features
- **Token Based prioritization** - Flexible token system for controlling execution orders for NPCs.
- **Advanced Patrol Spline** - Per actor patrol data with automatic direction switching.
- **Single Component AI Management** - Configure Perception, Behavior Tree, State Tree, Patrol data, etc. all from one component.
- **Flexible Perception System** - Adjust Sight, Hearing, and Damage sensing directly in the component and receive stimuli without extra setup.
- **Example Tasks** - Some simple example tasks for Behavior and State Tree.

------------------------------------

## HAIPro Plugin: Basic Setup and Usage
This guide will help you set up and use the HAIPro Plugin.

### Assigning the HAIController
<img width="777" height="72" alt="Screenshot 2025-09-24 010208" src="https://github.com/user-attachments/assets/9dae465f-1976-4759-96cf-fc3d9e73da8c" />

To use the **HAIController** for your NPCs:

1. Open the NPC Blueprint.
2. In the **Class Defaults**, locate the **AI Controller Class** property.
3. Select **HAIController** from the dropdown list.
4. Save the Blueprint.

--------------------------------
   
### Adding the HAI Base Component & Configuring Perception  <img width="768" height="894" alt="Screenshot 2025-09-24 004543" src="https://github.com/user-attachments/assets/99ab9bd5-7d6d-4802-a723-e1307ff29753" />
<img width="158" height="31" alt="Screenshot 2025-09-24 010006" src="https://github.com/user-attachments/assets/2d407c87-3a85-4cd1-9445-6acc2bc6d348" />

- **You can assign your patrol point into the component**
- **Assign your Behavior or State Tree into the component and if you want you can trigger them to start at Begin Play**
- **You can enable or disable perception and also you can decide to dominant sense and sense's values**
<img width="1052" height="1164" alt="Screenshot 2025-09-24 013619" src="https://github.com/user-attachments/assets/81e9c4ad-885b-468b-8186-b0327b47fc9e" />
<img width="1337" height="1170" alt="Screenshot 2025-09-24 005744" src="https://github.com/user-attachments/assets/fa69926c-f8c1-4477-a32f-181e824da2e5" />

-------------------------------

### Token System      <img width="183" height="26" alt="Screenshot 2025-09-24 010009" src="https://github.com/user-attachments/assets/d80d5ae3-8010-4663-811c-4932c22eb25c" />
<img width="775" height="89" alt="Screenshot 2025-09-24 010001" src="https://github.com/user-attachments/assets/03c6a4e1-d268-4e27-92cd-60f0988b5979" />

- **!!!** Both the giver (e.g., NPC, player, or object) and the receiver (e.g., NPC or another entity) must have the **HToken System Component**.

<img width="1039" height="455" alt="Screenshot 2025-09-24 013929" src="https://github.com/user-attachments/assets/7866fe95-d635-470a-b1e6-253b92371676" />
<img width="1215" height="1043" alt="Screenshot 2025-09-24 005949" src="https://github.com/user-attachments/assets/1651679d-d00b-4a25-8143-3e3280b8aeea" />


--------------------------------------

## Behavior and State Tree Example Tasks

<img width="625" height="311" alt="Screenshot 2025-09-24 012324" src="https://github.com/user-attachments/assets/ee5d4f84-2e8c-4d0c-b135-ce66fd126f0b" />
<img width="1040" height="401" alt="Screenshot 2025-09-24 012346" src="https://github.com/user-attachments/assets/e33551b8-a047-4b7d-a8fe-d612b3150619" />



Script Example(AI Controller)

```cpp

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "BehaviorTree/BehaviorTreeComponent.h"
#include "StateTree/HStateTreeAIComponent.h"
#include "Navigation/CrowdFollowingComponent.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Damage.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionTypes.h"
#include "HAIController.generated.h"

class UHAIBaseComponent;

/** for Filtering the perception types */
UENUM(BlueprintType)
enum class E_SenseType : uint8
{
	NoneType UMETA(DisplayName = "NoneType"),
	SightConfig UMETA(DisplayName = "SightConfig"),
	HearingConfig UMETA(DisplayName = "HearingConfig"),
	DamageConfig UMETA(DisplayName = "DamageConfig")
};

/** for Adjusting the BehaviorTree and StateTree */
UENUM(BlueprintType)
enum class E_TreeAdjustments : uint8
{
	StartTree UMETA(DisplayName = "StartTree"),
	PauseTree UMETA(DisplayName = "PauseTree"),
	ResumeTree UMETA(DisplayName = "ResumeTree"),
	StopTree UMETA(DisplayName = "StopTree"),
	RestartTree UMETA(DisplayName = "RestartTree"),
	DestroyTree UMETA(DisplayName = "DestroyTree")
};

/** Struct for storing sense data */
USTRUCT(BlueprintType)
struct F_SenseData
{
	GENERATED_BODY()

	F_SenseData() : sensedActor(nullptr), senseType(E_SenseType::NoneType), stimulus() {}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HAI|Perception")
	TWeakObjectPtr<AActor> sensedActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HAI|Perception")
	E_SenseType senseType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HAI|Perception")
	FAIStimulus stimulus;
};

/** Delegate for updating percaption data */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPeraptionConfigUpdated, const F_SenseData&, SenseData);
/** Delegate for when actor is forgotten */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSenseActorForgotten, const AActor*, ForgottenActor);

UCLASS()
class HAIPRO_API AHAIController : public AAIController
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TObjectPtr<UCrowdFollowingComponent> CrowdFollowing;
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TObjectPtr<UAIPerceptionComponent> AIPerceptionComponent;
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TObjectPtr<UBehaviorTreeComponent> BehaviorTreeComponent;
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TObjectPtr<UHStateTreeAIComponent> StateTreeAIComponent;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category="HAI|Perception")
	FOnPeraptionConfigUpdated OnPerceptionConfigUpdated;
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category ="HAI|Perception")
	FOnSenseActorForgotten OnSenseActorForgotten;
	
	UPROPERTY()
	TObjectPtr<UHAIBaseComponent> HAIBaseComponent;
	
	UPROPERTY()
	TObjectPtr<UAISenseConfig_Sight> SightConfig;
	UPROPERTY()
	TObjectPtr<UAISenseConfig_Hearing> HearingConfig;
	UPROPERTY()
	TObjectPtr<UAISenseConfig_Damage> DamageConfig;
	
	AHAIController(const FObjectInitializer& ObjectInitializer);
	
	virtual void OnPossess(APawn* InPawn) override;

	/** Setting up percaption configs */
	void OpenSightConfig();
	void OpenHearingConfig();
	void OpenDamageConfig();

	/** Setting the dominant sense */
	void SetDominantSense();
	
	virtual void OnUnPossess() override;
	
	UFUNCTION()
	void OnTargetPerceptionForgotten(AActor* Actor);
	UFUNCTION()
	void OnTargetPerceptionInfoUpdated(const FActorPerceptionUpdateInfo& UpdateInfo);

public:

	/** Target Values you can set and you can get wherever you want like state tree */
	UPROPERTY()
	TWeakObjectPtr<AActor> TargetActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HAI|Perception")
	FVector TargetLocation = FVector::ZeroVector;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "HAI|Perception")
	FAIStimulus TargetStimulus;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "HAI|Perception")
	E_SenseType TargetSenseType = E_SenseType::NoneType;
	
	/** Setting target values */
	UFUNCTION(BlueprintCallable, Category="HAI")
	void SetTargetActor(AActor* newTarget, E_SenseType newSenseType, FAIStimulus newStimulus);
	UFUNCTION(BlueprintPure, Category="HAI")
	FORCEINLINE AActor* GetTargetActor() const { return TargetActor.Get(); }
	UFUNCTION()
	void OnTargetActorDestroyed(AActor* DestroyedActor);
	UFUNCTION(BlueprintCallable, Category="HAI")
	void SetTargetLocation(const FVector& newLocation, E_SenseType newSenseType, FAIStimulus newStimulus);
	UFUNCTION(BlueprintCallable, Category="HAI")
	void SetNullTargetActor();
	UFUNCTION(BlueprintCallable, Category="HAI")
	void SetNullTargetLocation();

	/** Adjusting the BehaviorTree and StateTree */
	UFUNCTION(BlueprintCallable, Category="HAI|BehaviorTree")
	void StartBehaviorTree();
	UFUNCTION(BlueprintCallable, Category="HAI|BehaviorTree")
	void StopBehaviorTree();
	UFUNCTION(BlueprintCallable, Category="HAI|BehaviorTree")
	void PauseBehaviorTree();
	UFUNCTION(BlueprintCallable, Category="HAI|BehaviorTree")
	void ResumeBehaviorTree();
	UFUNCTION(BlueprintCallable, Category="HAI|BehaviorTree")
	void RestartBehaviorTree();
	UFUNCTION(BlueprintCallable, Category="HAI|BehaviorTree")
	void DestroyBehaviorTree();

	UFUNCTION(BlueprintCallable, Category="HAI|StateTree")
	void StartStateTree();
	UFUNCTION(BlueprintCallable, Category="HAI|StateTree")
	void StopStateTree();
	UFUNCTION(BlueprintCallable, Category="HAI|StateTree")
	void PauseStateTree();
	UFUNCTION(BlueprintCallable, Category="HAI|StateTree")
	void ResumeStateTree();
	UFUNCTION(BlueprintCallable, Category="HAI|StateTree")
	void RestartStateTree();
	UFUNCTION(BlueprintCallable, Category="HAI|StateTree")
	void DestroyStateTree();
};
```

```cpp

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
	StateTreeAIComponent->StopLogic(TEXT("Stopped by AHAIController"));
}

void AHAIController::PauseStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;
	StateTreeAIComponent->PauseLogic(TEXT("Paused by AHAIController"));
}

void AHAIController::ResumeStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;
	StateTreeAIComponent->ResumeLogic(TEXT("Resumed by AHAIController"));
}

void AHAIController::RestartStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;;
	StateTreeAIComponent->RestartLogic();
}

void AHAIController::DestroyStateTree()
{
	if (!HAIBaseComponent || !HAIBaseComponent->StateTree || !StateTreeAIComponent)
		return;
	StateTreeAIComponent->Cleanup();
}
```
