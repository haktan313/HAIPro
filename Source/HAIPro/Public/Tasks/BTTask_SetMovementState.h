//SetMovementState
//It is a task which sets the movement state of the AI. The movement state is stored in the blackboard

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Enums_HAISystem.h"
#include "BTTask_SetMovementState.generated.h"

UCLASS()
class HAIPRO_API UBTTask_SetMovementState : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_SetMovementState();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	E_MovementType MovementType;//The type of movement
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	E_MovementState MovementState;//The movement state
};
