


#include "HAIBaseComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HAIController.h"
#include "Enums_HAISystem.h"
#include "HTokenSystemComponent.h"

UHAIBaseComponent::UHAIBaseComponent()
{
	OwnerCharacter = Cast<ACharacter>(GetOwner());
}

void UHAIBaseComponent::SetMovementStateWalk(E_MovementState movementState)
{
	float newSpeed;
	switch (movementState)
	{
		case E_MovementState::idle:
			newSpeed = 0.0f;
			break;
		case E_MovementState::walking:
			newSpeed = WalkSpeed;
			break;
		case E_MovementState::running:
			newSpeed = RunSpeed;
			break;
		default :
			newSpeed = WalkSpeed;
			break;
	}
	OwnerCharacter->GetCharacterMovement()->MaxWalkSpeed = newSpeed;
}

void UHAIBaseComponent::SetMovementStateFly(E_MovementState movementState)
{
	float newSpeed;
	switch (movementState)
	{
		case E_MovementState::idle:
			newSpeed = 0.0f;
			break;
		case E_MovementState::normalFlying:
			newSpeed = NormalFlySpeed;
			break;
		case E_MovementState::fastFlying:
			newSpeed = FastFlySpeed;
			break;
		default:
			newSpeed = NormalFlySpeed;
			break;
	}
	OwnerCharacter->GetCharacterMovement()->MaxFlySpeed = newSpeed;
}

// The function can call if npc is dead
void UHAIBaseComponent::Dead()
{
	StopBehaviorTree();//Stop the behavior tree
	AAIController* AIController = Cast<AAIController>(OwnerCharacter->GetController());
	if(AIController)
	{
		AIController->ClearFocus(EAIFocusPriority::Gameplay);//Clear the focus
	}
	UHTokenSystemComponent* TokenSystemComponent = OwnerCharacter->FindComponentByClass<UHTokenSystemComponent>();
	if(TokenSystemComponent && !TokenSystemComponent->TokenMap.IsEmpty())//If the token system component is valid and the token map is not empty that means the character took some tokens from other characters before dead
	{
		TArray<AActor*> Keys;
		TokenSystemComponent->TokenMap.GetKeys(Keys);//Get the keys of the token map (Actors)
		for(AActor* Actor : Keys)
		{
			if(Actor)
			{
				int amount = TokenSystemComponent->TokenMap[Actor];//Get the amount of the token that the character took from the actor
				TokenSystemComponent->GiveTokenToTarget(amount, Actor);//Give the token back to the actor
			}
		}
	}
}

// Stop the behavior tree
bool UHAIBaseComponent::StopBehaviorTree()
{
	AHAIController* AIController = Cast<AHAIController>(OwnerCharacter->GetController());
	if(AIController)
	{
		AIController->StopBehaviorTree();
		return true;
	}
	return false;
}

// Set the state as passive
void UHAIBaseComponent::SetStatePassive()
{
	AHAIController* AIController = Cast<AHAIController>(OwnerCharacter->GetController());
	if(AIController)
	{
		AIController->SetStateAsPassive();
	}
}

// Set the state as investigate
void UHAIBaseComponent::SetStateInvestigate()
{
	AHAIController* AIController = Cast<AHAIController>(OwnerCharacter->GetController());
	if(AIController)
	{
		AIController->SetStateAsInvestigate();
	}
}

// Set the state as active
void UHAIBaseComponent::SetStateActive()
{
	AHAIController* AIController = Cast<AHAIController>(OwnerCharacter->GetController());
	if(AIController)
	{
		AIController->SetStateAsActive();
	}
}

// Get the possess state
E_OnPossessState UHAIBaseComponent::GetPossessState()
{
	AHAIController* AIController = Cast<AHAIController>(OwnerCharacter->GetController());
	if(AIController)
	{
		return AIController->GetCurrentState();
	}
	return E_OnPossessState::passive;
}

// Get the patrol spline
AHPatrolSpline* UHAIBaseComponent::GetPatrolSpline()
{
	return PatrolSpline;
}