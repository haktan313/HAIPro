//FindNextPatrolNode
//It is a task which finds the next patrol node for the AI to move to. The patrol node is stored in the blackboard

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindNextPatrolNode.generated.h"


UCLASS()
class HAIPRO_API UBTTask_FindNextPatrolNode : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_FindNextPatrolNode();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere,Category="Blackboard")
	FBlackboardKeySelector pointVector;//The key for setting the patrol point in the blackboard
	
};
