
#include "HTokenSystemComponent.h"
#include "GameFramework/Actor.h" 
#include "Engine/World.h"      

//Interface function for taking token from the target
bool UHTokenSystemComponent::TookTokenFromTarget(int amount, AActor* targetActor)
{
	UHTokenSystemComponent* targetTokenSystem = targetActor->FindComponentByClass<UHTokenSystemComponent>();
	if(targetTokenSystem && targetTokenSystem->TookToken(amount))//If the target has enough token to take
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
	if (targetTokenSystem)
	{
		targetTokenSystem->GiveToken(amount);//Give token to the target
		currentToken -= amount;
		TokenMap.Remove(targetActor);
	}
}

//Interface function for taking token from the target
bool UHTokenSystemComponent::TookToken(int amount)
{
	if(currentToken >= amount)//If the target has enough token
	{
		currentToken -= amount;
		return true;
	}
	return false;
}

//Interface function for giving token to the target
void UHTokenSystemComponent::GiveToken(int amount)
{
	currentToken += amount;
}
