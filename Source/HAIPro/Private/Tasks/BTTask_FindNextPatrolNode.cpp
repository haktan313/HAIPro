

#include "Tasks/BTTask_FindNextPatrolNode.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "HAIBaseComponent.h"

UBTTask_FindNextPatrolNode::UBTTask_FindNextPatrolNode()
{
	NodeName = TEXT("FindNextPatrolNode");
}

EBTNodeResult::Type UBTTask_FindNextPatrolNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		APawn* pawn = AIController->GetPawn();
		if(pawn)
		{
			UHAIBaseComponent* HAIBaseComponent = Cast<UHAIBaseComponent>(pawn->GetComponentByClass(UHAIBaseComponent::StaticClass()));
			if(HAIBaseComponent)
			{
				AHPatrolSpline* patrolSpline = HAIBaseComponent->GetPatrolSpline();
				if(patrolSpline)
				{
					FVector patrolPointLocation = patrolSpline->GetPatrolRouteLocation();//Get the patrol point location from the patrol spline
					UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
					if(BlackboardComponent)
					{
						BlackboardComponent->SetValueAsVector(pointVector.SelectedKeyName, patrolPointLocation);//Set the patrol point location in the blackboard
						patrolSpline->PatrolRouteIndex();//Move to the next patrol point
						return EBTNodeResult::Succeeded;
					}
				}
			}
		}
	}
	return EBTNodeResult::Failed;
}
