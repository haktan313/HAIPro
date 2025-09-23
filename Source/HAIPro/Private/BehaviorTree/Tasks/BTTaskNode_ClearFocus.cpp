
#include "BehaviorTree/Tasks/BTTaskNode_ClearFocus.h"
#include "AIController.h"

UBTTaskNode_ClearFocus::UBTTaskNode_ClearFocus(const FObjectInitializer& ObjectInitializer)
{
	NodeName = "ClearFocus";
}

EBTNodeResult::Type UBTTaskNode_ClearFocus::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (AAIController* AIController = OwnerComp.GetAIOwner())
	{
		AIController->K2_ClearFocus();
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
