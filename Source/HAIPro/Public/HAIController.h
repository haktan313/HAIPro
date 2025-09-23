
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
