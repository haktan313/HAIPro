//SetFocus
//It is a task which sets the focus of the AI controller to a target actor. The target actor is stored in the blackboard

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetFocus.generated.h"


UCLASS()
class HAIPRO_API UBTTask_SetFocus : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_SetFocus();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector targetActorKey;//The key for the target actor in the blackboard
	
};
