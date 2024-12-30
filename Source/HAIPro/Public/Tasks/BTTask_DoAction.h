//DoAction
// It is a task node for the behavior tree. It is responsible for triggering the action of the AI character.

#pragma once

#include "CoreMinimal.h"
#include "Enums_HAISystem.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_DoAction.generated.h"


UCLASS()
class HAIPRO_API UBTTask_DoAction : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_DoAction(const FObjectInitializer& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UFUNCTION()
	void ActionEnd(E_DoActionResult DoActionResult);//Called when the action is ended with delegate 

	UPROPERTY(EditAnywhere, Category = "Action")
	int ActionID;//ID of the action
	UPROPERTY(EditAnywhere, Category = "Action")
	FBlackboardKeySelector CanDoActionBoolKey; //Blackboard key for checking if the AI character can do the action

	UBehaviorTreeComponent* MyOwnerComp;//Owner of the behavior tree component
	class UHAIBaseComponent* HAIBaseComponent;//HAIBaseComponent of the AI character
	APawn* Pawn;//Pawn of the AI character
	int TokenAmount;//Amount of the token

	UPROPERTY(EditAnywhere, Category = "Token")
	bool TokenTooked;//Check if the token is tooken if true give the token to the target actor after the action is ended
	UPROPERTY(EditAnywhere, Category = "Token")
	FBlackboardKeySelector TargetKey;//Blackboard key for the target of the action for giving the token
};
