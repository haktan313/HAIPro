//HAIBaseComponent
//It is a component that is attached to an AI character. It is responsible for AI things.

#pragma once

#include "CoreMinimal.h"
#include "Enums_HAISystem.h"
#include "HPatrolSpline.h"
#include "Components/ActorComponent.h"
#include "HAIBaseComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoActionDelegate, int , ActionID);//Delegate for starting an action
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionEndDelegate, E_DoActionResult, DoActionResult);//Delegate for ending an action

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HAIPRO_API UHAIBaseComponent : public UActorComponent
{
	GENERATED_BODY()
	class ACharacter* OwnerCharacter;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	class UBehaviorTree* BehaviorTree;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "HAI")//The behavior tree of the AI character
	TArray<FName> targetsTag;//The tag of the target actor of the AI character
	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category="HAI")
	float WalkSpeed;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	float RunSpeed;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	float NormalFlySpeed;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	float FastFlySpeed;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	AHPatrolSpline* PatrolSpline;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category="HAI")
	FOnDoActionDelegate OnDoAction; 
	UPROPERTY(BlueprintAssignable,BlueprintCallable, Category="HAI")
	FOnActionEndDelegate OnActionEnd;

	UPROPERTY(EditAnywhere, Category="HAI|Sense")
	bool OpenSight;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Sight")
	float SightRadius = 1200.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Sight")
	float LoseSightRadius = 1500.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Sight")
	float PeripheralVisionAngleDegrees = 90.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Sight")
	float MaxAgeForSight = 3.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense")
	bool OpenHear;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Hear")
	float HearingRange = 1000.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Hear")
	float MaxAgeHear = 2.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense")
	bool OpenDamage;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Damage")
	float MaxAgeDamage = 2.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HAI|Sense")
	E_DominantSense DominantSense = E_DominantSense::Sight; //The dominant sense of the AI character (Sight, Hear, Damage) default is Sight

private:

	UHAIBaseComponent();

public:
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetMovementStateWalk(E_MovementState movementState);
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetMovementStateFly(E_MovementState movementState);
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void Dead();//The function can call if npc is dead
	UFUNCTION(BlueprintCallable, Category = "HAI")
	bool StopBehaviorTree(); //Stop the behavior tree
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetStatePassive();//Set the state as passive
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetStateInvestigate();//Set the state as investigate
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetStateActive();//Set the state as active
	UFUNCTION(BlueprintCallable, Category = "HAI")
	E_OnPossessState GetPossessState();//Get the possess state

	AHPatrolSpline* GetPatrolSpline();
		
};
