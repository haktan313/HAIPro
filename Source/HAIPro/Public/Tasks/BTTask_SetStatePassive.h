//SetStatePassive
//It is a task node that sets the state of the AI character as passive. It is used in the behavior tree of the AI character.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetStatePassive.generated.h"


UCLASS()
class HAIPRO_API UBTTask_SetStatePassive : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_SetStatePassive(const FObjectInitializer& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	FTimerHandle PassiveTimerHandle;
	UFUNCTION()
	void SetStateAsPassive();//Set the state of the AI character as passive

	UPROPERTY(EditAnywhere, Category = "Task")
	float howManySecondsBeforePassive = 5.0f;//How many seconds before the AI character becomes passive

	UBehaviorTreeComponent* MyOwnerComp;//Owner of the behavior tree component
	class AHAIController* AIController;
};
