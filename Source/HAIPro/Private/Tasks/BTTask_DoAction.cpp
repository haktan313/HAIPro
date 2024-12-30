

#include "Tasks/BTTask_DoAction.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "HAIBaseComponent.h"
#include "HTokenSystemComponent.h"

UBTTask_DoAction::UBTTask_DoAction(const FObjectInitializer& ObjectInitializer)
{
	NodeName = TEXT("DoAction");
	bCreateNodeInstance = true;//Create a new instance of the node
}

EBTNodeResult::Type UBTTask_DoAction::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		Pawn = AIController->GetPawn();
		if(Pawn)
		{
			HAIBaseComponent = Cast<UHAIBaseComponent>(Pawn->GetComponentByClass(UHAIBaseComponent::StaticClass()));
			if(HAIBaseComponent)
			{
				HAIBaseComponent->OnDoAction.Broadcast(ActionID);//Call the action with the ID of the action
				HAIBaseComponent->OnActionEnd.AddDynamic(this, &UBTTask_DoAction::ActionEnd);//Add the delegate for the end of the action
				MyOwnerComp = &OwnerComp;//Behavior tree component of the AI character reference
				return EBTNodeResult::InProgress;
			}
		}
	}
	return EBTNodeResult::Failed;
}

EBTNodeResult::Type UBTTask_DoAction::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if(TokenTooked)//If the token is tooken give the token to the target actor
	{
		AActor* Target = Cast<AActor>(MyOwnerComp->GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName));//Get the target actor from the blackboard
		UHTokenSystemComponent* TokenSystem = Pawn->FindComponentByClass<UHTokenSystemComponent>();//Token system component of the AI character
		if(TokenSystem && Target && TokenSystem->TokenMap.Contains(Target))
		{
			TokenAmount = Pawn->FindComponentByClass<UHTokenSystemComponent>()->TokenMap[Target];//Get the token amount from the token map
			TokenSystem->GiveTokenToTarget(TokenAmount, Target);//Give the token to the target actor
			MyOwnerComp->GetBlackboardComponent()->SetValueAsBool(CanDoActionBoolKey.SelectedKeyName, false);//Set the CanDoActionBoolKey as false
		}
	}
	HAIBaseComponent->OnActionEnd.RemoveDynamic(this, &UBTTask_DoAction::ActionEnd);//Remove the delegate
	HAIBaseComponent->OnActionEnd.Broadcast(E_DoActionResult::aborted);//Broadcast the end of the action
	return EBTNodeResult::Aborted;
}

void UBTTask_DoAction::ActionEnd(E_DoActionResult DoActionResult)
{
	HAIBaseComponent->OnActionEnd.RemoveDynamic(this, &UBTTask_DoAction::ActionEnd);//Remove the delegate
	if(MyOwnerComp)
	{
		if(TokenTooked)//If the token is tooken give the token to the target actor
		{
			AActor* Target = Cast<AActor>(MyOwnerComp->GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName));//Get the target actor from the blackboard
			UHTokenSystemComponent* TokenSystem = Pawn->FindComponentByClass<UHTokenSystemComponent>();//Token system component of the AI character
			if(TokenSystem && Target && TokenSystem->TokenMap.Contains(Target))//If the token system component and the target actor is valid
			{
				TokenAmount = Pawn->FindComponentByClass<UHTokenSystemComponent>()->TokenMap[Target];//Get the token amount from the token map
				TokenSystem->GiveTokenToTarget(TokenAmount, Target);//Give the token to the target actor
				MyOwnerComp->GetBlackboardComponent()->SetValueAsBool(CanDoActionBoolKey.SelectedKeyName, false);//Set the CanDoActionBoolKey as false
			}
		}
		switch (DoActionResult)
		{
			case E_DoActionResult::success:
				FinishLatentTask(*MyOwnerComp, EBTNodeResult::Succeeded);
				break;
			case E_DoActionResult::failed:
				FinishLatentTask(*MyOwnerComp, EBTNodeResult::Failed);
				break;
			case E_DoActionResult::aborted:
				FinishLatentTask(*MyOwnerComp, EBTNodeResult::Aborted);
				break;
		}
	}
}
