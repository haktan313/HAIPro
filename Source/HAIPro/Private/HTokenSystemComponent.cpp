
#include "HTokenSystemComponent.h"
#include "GameFramework/Actor.h" 
#include "Engine/World.h"      

//Interface function for taking token from the target
bool UHTokenSystemComponent::TookTokenFromTarget(int amount, AActor* targetActor)
{
	UHTokenSystemComponent* targetTokenSystem = targetActor->FindComponentByClass<UHTokenSystemComponent>();
	if(targetTokenSystem && IInterface_HTokenSystem::Execute_TookToken(targetTokenSystem, amount))//If the target has enough token to take
	{
		currentToken += amount;
		TokenMap.Add(targetActor, amount);//Add the target to the map
		return true;
	}
	return false;
}

//Interface function for giving token to the target
void UHTokenSystemComponent::GiveTokenToTarget(int amount, AActor* targetActor)
{
	UHTokenSystemComponent* targetTokenSystem = targetActor->FindComponentByClass<UHTokenSystemComponent>();
	IInterface_HTokenSystem::Execute_GiveToken(targetTokenSystem, amount);
	currentToken -= amount;
	TokenMap.Remove(targetActor);
}

//Interface function for taking token from the target
bool UHTokenSystemComponent::TookToken_Implementation(int amount)
{
	if(currentToken >= amount)//If the target has enough token
	{
		currentToken -= amount;
		return true;
	}
	return false;
}

//Interface function for giving token to the target
void UHTokenSystemComponent::GiveToken_Implementation(int amount)
{
	currentToken += amount;
}
