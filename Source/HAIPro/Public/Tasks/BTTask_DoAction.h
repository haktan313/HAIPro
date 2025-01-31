
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
	void ActionEnd(E_DoActionResult DoActionResult);

	UPROPERTY(EditAnywhere, Category = "Action")
	int ActionID;
	UPROPERTY(EditAnywhere, Category = "Action")
	FBlackboardKeySelector CanDoActionBoolKey; //Blackboard key for checking if the AI character can do the action

	UPROPERTY()
	UBehaviorTreeComponent* MyOwnerComp;
	UPROPERTY()
	class UHAIBaseComponent* HAIBaseComponent;
	UPROPERTY()
	APawn* Pawn;
	int TokenAmount;

	UPROPERTY(EditAnywhere, Category = "Token")
	bool TokenTooked;
	UPROPERTY(EditAnywhere, Category = "Token")
	FBlackboardKeySelector TargetKey;
};
