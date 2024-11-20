


#include "Decorators/BTDecorator_IsInTheRange.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_IsInTheRange::UBTDecorator_IsInTheRange()
{
	NodeName = "Is In The Range";
}

bool UBTDecorator_IsInTheRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		APawn* pawn = AIController->GetPawn();
		if(pawn)
		{
			UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
			if(BlackboardComp)
			{
				AActor* targetActor = Cast<AActor>(BlackboardComp->GetValueAsObject(targetActorKey.SelectedKeyName));//Get the target actor from the blackboard
				if(targetActor)
				{
					float distance = FVector::Dist(targetActor->GetActorLocation(), pawn->GetActorLocation());//Get the distance between the AI and the target actor
					distance = distance - AcceptableErorRadius;//Subtract the acceptable error radius from the distance
					return distance <= idealRangeValue;//Check if the distance is less than or equal to the ideal range value
				}
			}
		}
	}
	return false;
}
