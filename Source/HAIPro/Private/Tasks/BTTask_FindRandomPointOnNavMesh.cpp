


#include "Tasks/BTTask_FindRandomPointOnNavMesh.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_FindRandomPointOnNavMesh::UBTTask_FindRandomPointOnNavMesh()
{
	NodeName = TEXT("FindRandomPointOnNavMesh");
}

EBTNodeResult::Type UBTTask_FindRandomPointOnNavMesh::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		APawn* ControlledPawn = AIController->GetPawn();
		if(ControlledPawn)
		{
			FVector origin = ControlledPawn->GetActorLocation();//Get the origin of the AI
			FNavLocation location;//The location of the random point
			UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());//Get the navigation system
			if(NavSys && NavSys->GetRandomPointInNavigableRadius(origin, Radius, location))//Get a random point on the nav mesh
			{
				UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
				if(BlackboardComp)
				{
					BlackboardComp->SetValueAsVector(pointVector.SelectedKeyName, location.Location);//Set the random point in the blackboard
					return EBTNodeResult::Succeeded;
				}
			}
		}
	}
	return EBTNodeResult::Failed;
}
