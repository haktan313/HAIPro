
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Enums_HAISystem.h"
#include "HAIController.generated.h"


UCLASS()
class HAIPRO_API AHAIController : public AAIController
{
	GENERATED_BODY()

public:

	AHAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	virtual void OnPossess(APawn* InPawn) override;

	UFUNCTION()
	void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

	bool PlayerSensed(AActor* sensedActor, E_SenseType senseType);

	void HandleSense(AActor* sensedTargetActor);

	UPROPERTY()
	class UCrowdFollowingComponent* CrowdFollowingComponent;

	UPROPERTY()
	class UHAIBaseComponent* HAIBaseComponent;

public:

	UPROPERTY()
	UAIPerceptionComponent* AIPerceptionComponent;

	UPROPERTY()
	class UAISenseConfig_Sight* SightConfig;
	UPROPERTY()
	class UAISenseConfig_Hearing* HearingConfig;
	UPROPERTY()
	class UAISenseConfig_Damage* DamageConfig;
	
	E_OnPossessState GetCurrentState();

	FVector pointOfInterest;
	UPROPERTY()
	AActor* targetActor;

	void SetStateAsPassive();
	void SetStateAsInvestigate();
	void SetStateAsActive();

	void StopBehaviorTree();
	
	TArray<FName> targetsTag;
	
};
