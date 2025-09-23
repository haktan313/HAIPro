
#include "BehaviorTree/Tasks/BTTaskNode_SetFocus.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTaskNode_SetFocus::UBTTaskNode_SetFocus(const FObjectInitializer& ObjectInitializer)
{
	NodeName = "SetFocus";

	FocusTarget.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTTaskNode_SetFocus, FocusTarget), AActor::StaticClass());
	FocusTarget.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTaskNode_SetFocus, FocusTarget));
}

EBTNodeResult::Type UBTTaskNode_SetFocus::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	if (AIController && BlackboardComponent)
	{
		if (AActor* FocusActor = Cast<AActor>(BlackboardComponent->GetValueAsObject(FocusTarget.SelectedKeyName)))
		{
			AIController->K2_SetFocus(FocusActor);
		}
		else if (BlackboardComponent->GetValueAsVector(FocusTarget.SelectedKeyName) != FVector::ZeroVector)
		{
			AIController->K2_SetFocalPoint(BlackboardComponent->GetValueAsVector(FocusTarget.SelectedKeyName));
		}
		else
		{
			AIController->K2_ClearFocus();
		}
		
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}

