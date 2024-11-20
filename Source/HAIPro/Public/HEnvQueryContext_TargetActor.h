//HEnvQueryContext_TargetActor
// It is a context class for the Environment Query System. It provides the target actor for the AI character.

#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "HEnvQueryContext_TargetActor.generated.h"


UCLASS()
class HAIPRO_API UHEnvQueryContext_TargetActor : public UEnvQueryContext
{
	GENERATED_BODY()

	virtual void ProvideContext(FEnvQueryInstance& QueryInstance, FEnvQueryContextData& ContextData) const override;
	
};
