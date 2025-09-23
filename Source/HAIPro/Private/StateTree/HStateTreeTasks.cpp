
#include "StateTree/HStateTreeTasks.h"
#include "StateTreeExecutionContext.h"
#include "HAIBaseComponent.h"

// SetFocus Task
EStateTreeRunStatus FTask_SetFocus::EnterState(FStateTreeExecutionContext& Context,const FStateTreeTransitionResult& Transition) const
{
	FTask_SetFocusInstanceData* InstanceData = Context.GetInstanceDataPtr<FTask_SetFocusInstanceData>(*this);
	if (InstanceData && InstanceData->Controller)
	{
		if (InstanceData->FocusActor)
		{
			InstanceData->Controller->K2_SetFocus(InstanceData->FocusActor);
		}
		else if (InstanceData->FocusLocation != FVector::ZeroVector)
		{
			InstanceData->Controller->K2_SetFocalPoint(InstanceData->FocusLocation);
		}
		else
		{
			InstanceData->Controller->K2_ClearFocus();
		}
		return InstanceData->bFinishTaskAfterFocusSet ? EStateTreeRunStatus::Succeeded : EStateTreeRunStatus::Running;
	}
	return EStateTreeRunStatus::Failed;
}

// ClearFocus Task
EStateTreeRunStatus FTask_ClearFocus::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
{
	FTask_ClearFocusInstanceData* InstanceData = Context.GetInstanceDataPtr<FTask_ClearFocusInstanceData>(*this);
	if (InstanceData && InstanceData->Controller)
	{
		InstanceData->Controller->K2_ClearFocus();
		return InstanceData->bFinishTaskAfterFocusCleared ? EStateTreeRunStatus::Succeeded : EStateTreeRunStatus::Running;
	}
	return EStateTreeRunStatus::Failed;
}

// SetNextPatrolPoint Task
EStateTreeRunStatus FTask_SetNextPatrolPoint::EnterState(FStateTreeExecutionContext& Context,const FStateTreeTransitionResult& Transition) const
{
	FTask_SetNextPatrolPointInstanceData* InstanceData = Context.GetInstanceDataPtr<FTask_SetNextPatrolPointInstanceData>(*this);
	if (InstanceData && InstanceData->Controller && InstanceData->RequestedBy)
	{
		UHAIBaseComponent* HAIBaseComponent = InstanceData->RequestedBy->FindComponentByClass<UHAIBaseComponent>();
		if (HAIBaseComponent && HAIBaseComponent->GetPatrolSpline())
		{
			FVector nextPatrolPoint = HAIBaseComponent->GetPatrolSpline()->MoveNextPatrolPoint(InstanceData->RequestedBy);
			if (nextPatrolPoint != FVector::ZeroVector)
			{
				InstanceData->NextPatrolPoint = nextPatrolPoint;
				return InstanceData->bEndTaskAfterSettingNextPoint ? EStateTreeRunStatus::Succeeded : EStateTreeRunStatus::Running;
			}
		}
	}
	return EStateTreeRunStatus::Failed; 
}
