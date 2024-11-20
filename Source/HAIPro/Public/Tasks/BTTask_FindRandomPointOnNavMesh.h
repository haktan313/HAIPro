//FindRandomPointOnNavMesh
//It is a task which finds a random point on the nav mesh for the AI to move to. The point is stored in the blackboard

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindRandomPointOnNavMesh.generated.h"


UCLASS()
class HAIPRO_API UBTTask_FindRandomPointOnNavMesh : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_FindRandomPointOnNavMesh();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "Radius")
	float Radius = 500.0f;//The radius for finding the random point
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector pointVector;//The key for setting the random point in the blackboard
	
};
