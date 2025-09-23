

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_SetNextPatrolPoint.generated.h"


UCLASS()
class HAIPRO_API UBTTaskNode_SetNextPatrolPoint : public UBTTaskNode
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector NextPatrolPointKey;

	UBTTaskNode_SetNextPatrolPoint(const FObjectInitializer& ObjectInitializer);
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
