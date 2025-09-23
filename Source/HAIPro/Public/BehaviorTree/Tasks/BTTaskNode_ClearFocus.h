
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_ClearFocus.generated.h"

UCLASS()
class HAIPRO_API UBTTaskNode_ClearFocus : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTaskNode_ClearFocus(const FObjectInitializer& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
