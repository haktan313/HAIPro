
#include "HTokenSystemComponent.h"
#include "GameFramework/Actor.h"

UHTokenSystemComponent::UHTokenSystemComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UHTokenSystemComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	for (auto& Pair : TokenCountMap)
	{
		if (!IsValid(Pair.Key.Get())){ continue;}
		if (AActor* Actor = Pair.Key.Get())
		{
			Actor->OnDestroyed.RemoveDynamic(this, &UHTokenSystemComponent::OnDestroyedGivenActor);
			if (Pair.Value > 0)
			{
				if (UHTokenSystemComponent* TargetTokenSystem = Actor->FindComponentByClass<UHTokenSystemComponent>())
				{
					TargetTokenSystem->currentTokenCount += Pair.Value;
					if (TargetTokenSystem->currentTokenCount > TargetTokenSystem->maxTokenCount)
					{
						TargetTokenSystem->currentTokenCount = TargetTokenSystem->maxTokenCount;
					}
				}
			}
		}
	}
	TokenCountMap.Empty();
	Super::EndPlay(EndPlayReason);
}

bool UHTokenSystemComponent::TookTokenFromGivenActor(AActor* GivenActor, int TokenCount, E_TookTokenFailReason& FailReason)
{
	if (!GivenActor)
	{
		FailReason = E_TookTokenFailReason::GivenActorNotValid;
		return false;
	}
	UHTokenSystemComponent* TargetTokenSystem = GivenActor->FindComponentByClass<UHTokenSystemComponent>();
	if (!TargetTokenSystem)
	{
		FailReason = E_TookTokenFailReason::GivenActorHasNoTokenSystemComponent;
		return false;
	}
	if (TargetTokenSystem->currentTokenCount <= 0)
	{
		FailReason = E_TookTokenFailReason::TokenCountLessOrEqualZero;
		return false;
	}
	if (TargetTokenSystem->currentTokenCount < TokenCount)
	{
		FailReason = E_TookTokenFailReason::TokenCountNotEnough;
		return false;
	}
	TargetTokenSystem->currentTokenCount -= TokenCount;
	if (int* ExistingTokenCount = TokenCountMap.Find(GivenActor))
	{
		*ExistingTokenCount += TokenCount;
	}
	else
	{
		GivenActor->OnDestroyed.AddDynamic(this, &UHTokenSystemComponent::OnDestroyedGivenActor);
		TokenCountMap.Add(GivenActor, TokenCount);	
	}
	return true;
}

void UHTokenSystemComponent::OnDestroyedGivenActor(AActor* DestroyedActor)
{
	DestroyedActor->OnDestroyed.RemoveDynamic(this, &UHTokenSystemComponent::OnDestroyedGivenActor);
	TokenCountMap.Remove(DestroyedActor);
}

bool UHTokenSystemComponent::GiveTokenToGivenActor(AActor* GivenActor, int TokenCount, E_GiveTokenFailReason& FailReason)
{
	if (!GivenActor)
	{
		FailReason = E_GiveTokenFailReason::GivenActorNotValid;
		return false;
	}
	UHTokenSystemComponent* TargetTokenSystem = GivenActor->FindComponentByClass<UHTokenSystemComponent>();
	if (!TargetTokenSystem)
	{
		FailReason = E_GiveTokenFailReason::GivenActorHasNoTokenSystemComponent;
		return false;
	}
	if (!TokenCountMap.Contains(GivenActor))
	{
		FailReason = E_GiveTokenFailReason::ThereIsNoTokenTakenFromGivenActor;
		return false;
	}
	int* ExistingTokenCount = TokenCountMap.Find(GivenActor);
	if (*ExistingTokenCount <= 0)
	{
		FailReason = E_GiveTokenFailReason::TakenTokenCountLessOrEqualZero;
		return false;
	}
	if (*ExistingTokenCount < TokenCount)
	{
		FailReason = E_GiveTokenFailReason::TakenTokenCountNotEnoughForGiveItToBack;
		return false;
	}
	TargetTokenSystem->currentTokenCount += TokenCount;
	*ExistingTokenCount -= TokenCount;
	if (TargetTokenSystem->currentTokenCount > TargetTokenSystem->maxTokenCount)
	{
		*ExistingTokenCount += TargetTokenSystem->currentTokenCount - TargetTokenSystem->maxTokenCount;
		TargetTokenSystem->currentTokenCount = TargetTokenSystem->maxTokenCount;
	}
	if (*ExistingTokenCount <= 0)
	{
		GivenActor->OnDestroyed.RemoveDynamic(this, &UHTokenSystemComponent::OnDestroyedGivenActor);
		TokenCountMap.Remove(GivenActor);
	}
	return true;
}

void UHTokenSystemComponent::IncreaseCurrentTokenToGivenActor(AActor* GivenActor, int TokenCount, E_TokenManagmentFailReason& FailReason)
{
	if (!GivenActor)
	{
		FailReason = E_TokenManagmentFailReason::GivenActorNotValid;
		return;
	}
	UHTokenSystemComponent* TargetTokenSystem = GivenActor->FindComponentByClass<UHTokenSystemComponent>();
	if (!TargetTokenSystem)
	{
		FailReason = E_TokenManagmentFailReason::GivenActorHasNoTokenSystemComponent;
		return;
	}
	TargetTokenSystem->currentTokenCount += TokenCount;
	if (TargetTokenSystem->currentTokenCount > TargetTokenSystem->maxTokenCount)
	{
		TargetTokenSystem->currentTokenCount = TargetTokenSystem->maxTokenCount;
	}
}

void UHTokenSystemComponent::IncreaseMaxTokenCountToGivenActor(AActor* GivenActor, int TokenCount, E_TokenManagmentFailReason& FailReason)
{
	if (!GivenActor)
	{
		FailReason = E_TokenManagmentFailReason::GivenActorNotValid;
		return;
	}
	UHTokenSystemComponent* TargetTokenSystem = GivenActor->FindComponentByClass<UHTokenSystemComponent>();
	if (!TargetTokenSystem)
	{
		FailReason = E_TokenManagmentFailReason::GivenActorHasNoTokenSystemComponent;
		return;
	}
	TargetTokenSystem->maxTokenCount += TokenCount;
}

void UHTokenSystemComponent::DecraeseCurrentTokenToGivenActor(AActor* GivenActor, int TokenCount, E_TokenManagmentFailReason& FailReason)
{
	if (!GivenActor)
	{
		FailReason = E_TokenManagmentFailReason::GivenActorNotValid;
		return;
	}
	UHTokenSystemComponent* TargetTokenSystem = GivenActor->FindComponentByClass<UHTokenSystemComponent>();
	if (!TargetTokenSystem)
	{
		FailReason = E_TokenManagmentFailReason::GivenActorHasNoTokenSystemComponent;
		return;
	}
	TargetTokenSystem->currentTokenCount -= TokenCount;
	if (TargetTokenSystem->currentTokenCount < 0)
	{
		TargetTokenSystem->currentTokenCount = 0;
	}
}

void UHTokenSystemComponent::DecraeseMaxTokenCountToGivenActor(AActor* GivenActor, int TokenCount, E_TokenManagmentFailReason& FailReason)
{
	if (!GivenActor)
	{
		FailReason = E_TokenManagmentFailReason::GivenActorNotValid;
		return;
	}
	UHTokenSystemComponent* TargetTokenSystem = GivenActor->FindComponentByClass<UHTokenSystemComponent>();
	if (!TargetTokenSystem)
	{
		FailReason = E_TokenManagmentFailReason::GivenActorHasNoTokenSystemComponent;
		return;
	}
	TargetTokenSystem->maxTokenCount -= TokenCount;
	if (TargetTokenSystem->maxTokenCount < 0)
	{
		TargetTokenSystem->maxTokenCount = 0;
	}
	if (TargetTokenSystem->currentTokenCount > TargetTokenSystem->maxTokenCount)
	{
		TargetTokenSystem->currentTokenCount = TargetTokenSystem->maxTokenCount;
	}
}

int UHTokenSystemComponent::GetTargetsCurrentTokenCount(AActor* TargetActor) const
{
	if (!TargetActor){return 0;}
	if (const int* Count = TokenCountMap.Find(TargetActor))
	{
		return *Count;
	}
	return 0; 
}


