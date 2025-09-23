#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "StateTreeTaskBase.h"
#include "HStateTreeTasks.generated.h"

/**SetFocus Task */
USTRUCT()
struct FTask_SetFocusInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Context")
	TObjectPtr<AAIController> Controller;
	
	UPROPERTY(EditAnywhere, Category = Parameter)
	TObjectPtr<AActor> FocusActor;
	
	UPROPERTY(EditAnywhere, Category = Parameter)
	FVector FocusLocation = FVector::ZeroVector;

	/** if true task will finish after focus is set but if not it will continue to run it mean that it wont end */ 
	UPROPERTY(EditAnywhere, Category = Parameter)
	bool bFinishTaskAfterFocusSet = false;
};

USTRUCT(meta = (DisplayName = "Set Focus", Category = "HAI"))
struct FTask_SetFocus : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FTask_SetFocusInstanceData;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context,const FStateTreeTransitionResult& Transition) const override;
	
};

/** ClearFocus Task */
USTRUCT()
struct FTask_ClearFocusInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Context")
	TObjectPtr<AAIController> Controller;

	/**if true task will finish after focus is set but if not it will continue to run it mean that it wont end*/
	UPROPERTY(EditAnywhere, Category = Parameter)
	bool bFinishTaskAfterFocusCleared = false;
};

USTRUCT(meta = (DisplayName = "Clear Focus", Category = "HAI"))
struct FTask_ClearFocus : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FTask_ClearFocusInstanceData;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context,const FStateTreeTransitionResult& Transition) const override;
};

/** SetNextPatrolPoint Task */
USTRUCT()
struct FTask_SetNextPatrolPointInstanceData
{
	GENERATED_BODY()

	FTask_SetNextPatrolPointInstanceData() : NextPatrolPoint(FVector::ZeroVector), bEndTaskAfterSettingNextPoint(false) {}

	UPROPERTY(EditAnywhere, Category = "Context")
	TObjectPtr<AAIController> Controller;

	UPROPERTY(EditAnywhere, Category = "Context")
	TObjectPtr<AActor> RequestedBy;

	UPROPERTY(EditAnywhere, Category = Output)
	FVector NextPatrolPoint;

	/** if true task will finish after focus is set but if not it will continue to run it mean that it wont end */
	UPROPERTY(EditAnywhere, Category = Parameter)
	bool bEndTaskAfterSettingNextPoint = false;
};

USTRUCT(meta = (DisplayName = "Set Next Patrol Point", Category = "HAI"))
struct FTask_SetNextPatrolPoint : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FTask_SetNextPatrolPointInstanceData;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }
	
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context,const FStateTreeTransitionResult& Transition) const override;
};