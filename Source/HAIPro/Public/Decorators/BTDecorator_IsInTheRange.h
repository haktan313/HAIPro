//IsInTheRange
//It is a decorator which checks if the AI is in the ideal range of the target actor or not.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsInTheRange.generated.h"


UCLASS()
class HAIPRO_API UBTDecorator_IsInTheRange : public UBTDecorator
{
	GENERATED_BODY()

	UBTDecorator_IsInTheRange();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "HAI")
	float idealRangeValue;//The ideal range value
	UPROPERTY(EditAnywhere, Category = "HAI")
	float AcceptableErorRadius;//The acceptable error radius
	UPROPERTY(EditAnywhere, Category = "HAI")
	FBlackboardKeySelector targetActorKey;//The key for getting the target actor from the blackboard for checking the range
	
};
