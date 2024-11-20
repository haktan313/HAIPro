


#include "Tasks/BTTask_SetStatePassive.h"
#include "HAIController.h"
#include "TimerManager.h"
#include "Engine/World.h"

UBTTask_SetStatePassive::UBTTask_SetStatePassive(const FObjectInitializer& ObjectInitializer)
{
	NodeName = "Set State Passive";
	bCreateNodeInstance = true;//Create a new instance of the node
}

EBTNodeResult::Type UBTTask_SetStatePassive::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AIController = Cast<AHAIController>(OwnerComp.GetAIOwner());
	if (AIController)
	{
		MyOwnerComp = &OwnerComp;//Behavior tree component of the AI character reference
		GetWorld()->GetTimerManager().SetTimer(PassiveTimerHandle, this, &UBTTask_SetStatePassive::SetStateAsPassive, howManySecondsBeforePassive, false);
		return EBTNodeResult::InProgress;
	}
	return EBTNodeResult::Failed;
}

//Set the state of the AI character as passive
void UBTTask_SetStatePassive::SetStateAsPassive()
{
	if(MyOwnerComp)
	{
		AIController->SetStateAsPassive();
		FinishLatentTask(*MyOwnerComp, EBTNodeResult::Succeeded);
	}
}
