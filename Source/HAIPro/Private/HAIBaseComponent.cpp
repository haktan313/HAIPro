
#include "HAIBaseComponent.h"
#include "GameFramework/Character.h"
#include "HAIController.h"
#include "TimerManager.h"
#include "Engine/World.h"

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

