


#include "Decorators/BTDecorator_HasPatrolRoute.h"
#include "AIController.h"
#include "HAIBaseComponent.h"

UBTDecorator_HasPatrolRoute::UBTDecorator_HasPatrolRoute()
{
	NodeName = TEXT("Has Patrol Route");
}

bool UBTDecorator_HasPatrolRoute::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		APawn* controlledPawn = AIController->GetPawn();
		if(controlledPawn)
		{
			UHAIBaseComponent* HAIBaseComponent = Cast<UHAIBaseComponent>(controlledPawn->GetComponentByClass(UHAIBaseComponent::StaticClass()));//Get the HAIBaseComponent
			if(HAIBaseComponent)
			{
				AHPatrolSpline* patrolSpline = HAIBaseComponent->GetPatrolSpline();//Get the patrol spline from the HAIBaseComponent
				if(patrolSpline)
				{
					return true;
				}
			}
		}
	}
	return false;
}
