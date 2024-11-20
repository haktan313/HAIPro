//HAIController.h
//This class is the AI controller for the HAI plugin. It is responsible for handling the AI perception and the behavior tree of the AI character.
//Also ıt has CrowdFollowingComponent and HAIBaseComponent for handling the movement of the AI character.

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

	AHAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); //Constructor

protected:

	virtual void OnPossess(APawn* InPawn) override;//Called when the AI controller possesses a pawn

	UFUNCTION()
	void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors); //Called when the perception of the AI controller is updated

	bool PlayerSensed(AActor* sensedActor, E_SenseType senseType);//Check if the AI character sensed something

	void HandleSense(AActor* sensedTargetActor);//Handle the sense of the AI character

	class UCrowdFollowingComponent* CrowdFollowingComponent;//The crowd following component of the AI character

	class UHAIBaseComponent* HAIBaseComponent;//The base component of the AI character

public:

	UAIPerceptionComponent* AIPerceptionComponent;//The perception component of the AI character
	
	class UAISenseConfig_Sight* SightConfig;//The sense configurations of the AI character
	class UAISenseConfig_Hearing* HearingConfig;//The sense configurations of the AI character
	class UAISenseConfig_Damage* DamageConfig;//The sense configurations of the AI character
	
	E_OnPossessState GetCurrentState();//Get the current state of the AI character

	FVector pointOfInterest;//The point of interest of the AI character
	AActor* targetActor;//The target actor of the AI character

	void SetStateAsPassive();//Set the state of the AI character as passive
	void SetStateAsInvestigate();//Set the state of the AI character as investigate
	void SetStateAsActive();//Set the state of the AI character as active

	void StopBehaviorTree();//Stop the behavior tree of the AI character
	
	TArray<FName> targetsTag;//The tag of the target actor of the AI character
	
};
