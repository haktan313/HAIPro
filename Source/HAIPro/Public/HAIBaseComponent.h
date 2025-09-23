
#pragma once

#include "CoreMinimal.h"
#include "HAIController.h"
#include "HPatrolSpline.h"
#include "Components/ActorComponent.h"
#include "HAIBaseComponent.generated.h"

UENUM(BlueprintType)
enum class E_DominantSense : uint8
{
	Sight UMETA(DisplayName = "Sight"),
	Hearing UMETA(DisplayName = "Hearing"),
	Damage UMETA(DisplayName = "Damage")
};

UENUM(BlueprintType)
enum class E_BehaviorTreeActionEndResult : uint8
{
	Success UMETA(DisplayName = "Success"),
	Failed UMETA(DisplayName = "Failed"),
	Aborted UMETA(DisplayName = "Aborted"),
	InProgress UMETA(DisplayName = "InProgress")
};

UENUM(BlueprintType)
enum class E_StateTreeActionEndResult : uint8
{
	Running UMETA(DisplayName = "Running"),
	Stopped UMETA(DisplayName = "Stopped"),
	Succeeded UMETA(DisplayName = "Succeeded"),
	Failed UMETA(DisplayName = "Failed"),
	Unset UMETA(DisplayName = "Unset")
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HAIPRO_API UHAIBaseComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category="HAI|BehaviorTree")
	TObjectPtr<UBehaviorTree> BehaviorTree;
	UPROPERTY(EditAnywhere, Category="HAI|BehaviorTree")
	bool bStartBehaviorTreeOnBeginPlay = false;
	
	UPROPERTY(EditAnywhere, Category="HAI|StateTree")
	TObjectPtr<UStateTree> StateTree;
	UPROPERTY(EditAnywhere, Category="HAI|StateTree")
	bool bStartStateTreeOnBeginPlay = false;

	UPROPERTY(EditAnywhere, Category="HAI")
	TObjectPtr<AHPatrolSpline> PatrolSpline;
	/** Getting data from PatrolSpline class */
	UFUNCTION(BlueprintPure, Category = "HAI|HPatrolSpline")
	FORCEINLINE F_PatrolData& GetPatrolData(const AActor* RequestedBy) const;
	UFUNCTION(BlueprintPure, Category = "HAI|HPatrolSpline")
	FORCEINLINE USplineComponent* GetSplineComponent() const { return PatrolSpline->SplineComponent; }
	UFUNCTION(BlueprintPure, Category = "HAI|HPatrolSpline")
	FORCEINLINE AHPatrolSpline* GetPatrolSpline() const { return PatrolSpline; }
	UFUNCTION(BlueprintPure, Category = "HAI|HPatrolSpline")
	FORCEINLINE int GetCurrentPointIndexOfPatrolData(const AActor* RequestedBy) const { return RequestedBy ? PatrolSpline->PatrolDataMap.Find(RequestedBy)->currentPointIndex : 0; }
	UFUNCTION(BlueprintPure, Category = "HAI|HPatrolSpline")
	FORCEINLINE int GetPreviousPointIndexOfPatrolData(const AActor* RequestedBy) const { return RequestedBy ? PatrolSpline->PatrolDataMap.Find(RequestedBy)->previousPointIndex : 0; }
	UFUNCTION(BlueprintPure, Category = "HAI|HPatrolSpline")
	FORCEINLINE int GetDirectionOfPatrolData(const AActor* RequestedBy) const {return RequestedBy ? PatrolSpline->PatrolDataMap.Find(RequestedBy)->direction : 0;}
	UFUNCTION(BlueprintCallable, Category = "HAI|HPatrolSpline")
	FORCEINLINE int GetPatrolPointCountOfPatrolData(const AActor* RequestedBy) const {return RequestedBy ? PatrolSpline->PatrolDataMap.Find(RequestedBy)->patrolPointCount : 0;}

	/** Sight Config Settings */
	UPROPERTY(EditAnywhere, Category="HAI|Perception")
	bool bEnableSight = true;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Sight")
	float SightRadius = 2000.f;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Sight")
	float LoseSightRadius = 2500.f;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Sight")
	float SightAge = 5.f;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Sight")
	bool bDetectEnemies = true;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Sight")
	bool bDetectNeutrals = true;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Sight")
	bool bDetectFriendlies = true;

	/** Hearing Config Settings */
	UPROPERTY(EditAnywhere, Category="HAI|Perception")
	bool bEnableHearing = true;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Hearing")
	float HearingRange = 2000.f;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Hearing")
	float HearingAge = 5.f;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Hearing")
	bool bDetectHearingEnemies = true;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Hearing")
	bool bDetectHearingNeutrals = true;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Hearing")
	bool bDetectHearingFriendlies = true;

	/** Damage Config Settings */
	UPROPERTY(EditAnywhere, Category="HAI|Perception")
	bool bEnableDamage = true;
	UPROPERTY(EditAnywhere, Category="HAI|Perception|Damage")
	float DamageAge = 5.f;

	UPROPERTY(EditAnywhere, Category="HAI|Perception")
	E_DominantSense DominantSense = E_DominantSense::Sight;

	UPROPERTY()
	TObjectPtr<AHAIController> OwnerAIController;
	UPROPERTY()
	TObjectPtr<ACharacter> OwnerCharacter;
private:
	
	UHAIBaseComponent();
	virtual void BeginPlay() override;

public:

	/** Percaption Events */
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category="HAI|Perception")
	FOnPeraptionConfigUpdated OnPerceptionConfigUpdated;
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category ="HAI|Perception")
	FOnSenseActorForgotten OnSenseActorForgotten;

	UFUNCTION(BlueprintPure, Category="HAI")
	FORCEINLINE AHAIController* GetHAIController() const {return OwnerAIController;}
		
};
