
#include "HAIBaseComponent.h"
#include "GameFramework/Character.h"
#include "HAIController.h"
#include "TimerManager.h"
#include "Engine/World.h"

F_PatrolData& UHAIBaseComponent::GetPatrolData(const AActor* RequestedBy) const
{
	if (RequestedBy)
	{
		if (F_PatrolData* Data = PatrolSpline->PatrolDataMap.Find(RequestedBy))
		{
			return *Data;
		}
	}
	static F_PatrolData DefaultData;
	return DefaultData;
}

UHAIBaseComponent::UHAIBaseComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UHAIBaseComponent::BeginPlay()
{
	Super::BeginPlay();
	OwnerCharacter = Cast<ACharacter>(GetOwner());
	if (OwnerCharacter)
	{
		OwnerAIController = Cast<AHAIController>(OwnerCharacter->GetController());
	}
}

