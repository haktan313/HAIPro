


#include "BehaviorTree/Tasks/BTTaskNode_SetNextPatrolPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "HAIBaseComponent.h"

UBTTaskNode_SetNextPatrolPoint::UBTTaskNode_SetNextPatrolPoint(const FObjectInitializer& ObjectInitializer)
{
	NodeName = "Set Next Patrol Point";
	NextPatrolPointKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTaskNode_SetNextPatrolPoint, NextPatrolPointKey));
}

EBTNodeResult::Type UBTTaskNode_SetNextPatrolPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (APawn* ControlledPawn = OwnerComp.GetAIOwner()->GetPawn())
	{
		UHAIBaseComponent* HAIBaseComponent = ControlledPawn->FindComponentByClass<UHAIBaseComponent>();
		if (HAIBaseComponent && HAIBaseComponent->PatrolSpline)
		{
			FVector nextPatrolPoint = HAIBaseComponent->GetPatrolSpline()->MoveNextPatrolPoint(ControlledPawn);
			if (nextPatrolPoint != FVector::ZeroVector)
			{
				OwnerComp.GetBlackboardComponent()->SetValueAsVector(NextPatrolPointKey.SelectedKeyName, nextPatrolPoint);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed; 
}
