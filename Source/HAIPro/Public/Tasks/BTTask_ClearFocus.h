//ClearFocus
// It is a task which clears the focus of the AI controller.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ClearFocus.generated.h"


UCLASS()
class HAIPRO_API UBTTask_ClearFocus : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_ClearFocus();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
