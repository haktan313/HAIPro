//Enums_HAISystem
//Enums for the AI System

#pragma once

#include "CoreMinimal.h"
#include "Enums_HAISystem.generated.h"

//Enum for the type of sense
UENUM(BlueprintType)
enum class E_SenseType : uint8 { 
	see UMETA(DisplayName = "See"),
	hear UMETA(DisplayName = "Hear"),
	damage UMETA(DisplayName = "Damage")
};

//Enum for the type of state
UENUM(BlueprintType)
enum class E_OnPossessState : uint8 {
	passive UMETA(DisplayName = "Passive"),
	investigate UMETA(DisplayName = "Investigate"),
	active UMETA(DisplayName = "Active")
};

//Enum for the type of movement
UENUM(BlueprintType)
enum class E_MovementType : uint8 {
	walk UMETA(DisplayName = "Walk"),
	fly UMETA(DisplayName = "Fly")
};

//Enum for the type of movement speed state
UENUM(BlueprintType)
enum class E_MovementState : uint8 {
	idle UMETA(DisplayName = "Idle"),
	walking UMETA(DisplayName = "Walking"),
	running UMETA(DisplayName = "Running"),
	normalFlying UMETA(DisplayName = "NormalFlying"),
	fastFlying UMETA(DisplayName = "FastFlying")
};

//Enum for the type of dominant sense
UENUM(BlueprintType)
enum class E_DominantSense : uint8
{
	Sight UMETA(DisplayName = "Sight"),
	Hearing UMETA(DisplayName = "Hearing"),
	Damage UMETA(DisplayName = "Damage")
};

//Enum for the result of the action
UENUM(BlueprintType)
enum class E_DoActionResult : uint8
{
	success UMETA(DisplayName = "Success"),
	failed UMETA(DisplayName = "Failed"),
	inProgress UMETA(DisplayName = "InProgress"),
	aborted UMETA(DisplayName = "Aborted")
};
