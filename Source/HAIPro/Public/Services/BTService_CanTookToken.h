//CanTookToken
//It is a service which checks if the AI can take the token from the target actor or not.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_CanTookToken.generated.h"


UCLASS()
class HAIPRO_API UBTService_CanTookToken : public UBTService
{
	GENERATED_BODY()

	UBTService_CanTookToken();

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	int amountOfTokenNedded;//The amount of token needed to take from the target
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector targetKey;//The key for getting the target actor from the blackboard for taking the token
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector DoActionBoolKey;//The key for setting the action bool in the blackboard. If the AI can take the token from the target Action can start which bellow to this bool
	
};
