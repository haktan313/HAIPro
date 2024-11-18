//HAIBaseComponent
//It is a component that is attached to an AI character. It is responsible for AI things.

#pragma once

#include "CoreMinimal.h"
#include "HPatrolSpline.h"
#include "Components/ActorComponent.h"
#include "HAIBaseComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoActionDelegate, int , ActionID);//Delegate for starting an action
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionEndDelegate, bool , bSuccess);//Delegate for ending an action

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

	UPROPERTY(BlueprintAssignable, Category="HAI")
	FOnDoActionDelegate OnDoAction; 
	UPROPERTY(BlueprintCallable, Category="HAI")
	FOnActionEndDelegate OnActionEnd;

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

	AHPatrolSpline* GetPatrolSpline();
		
};
