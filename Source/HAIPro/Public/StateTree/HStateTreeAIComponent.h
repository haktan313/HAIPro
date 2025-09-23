
#pragma once

#include "CoreMinimal.h"
#include "Components/StateTreeAIComponent.h"
#include "HStateTreeAIComponent.generated.h"


UCLASS()
class HAIPRO_API UHStateTreeAIComponent : public UStateTreeAIComponent
{
	GENERATED_BODY()
public:
	FORCEINLINE FStateTreeReference* GetStateTree(){return &StateTreeRef;}
	FORCEINLINE void SetStateTreeRef(const FStateTreeReference& InStateTreeRef){ StateTreeRef = InStateTreeRef;}
};
