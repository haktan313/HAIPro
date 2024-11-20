


#include "Tasks/BTTask_ClearFocus.h"
#include "AIController.h"

UBTTask_ClearFocus::UBTTask_ClearFocus()
{
	NodeName = TEXT("Clear Focus");
}

EBTNodeResult::Type UBTTask_ClearFocus::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		AIController->ClearFocus(EAIFocusPriority::Gameplay);//Clear the focus of the AI controller
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
