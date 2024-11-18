


#include "HEnvQueryContext_TargetActor.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "HAIController.h"

void UHEnvQueryContext_TargetActor::ProvideContext(FEnvQueryInstance& QueryInstance,FEnvQueryContextData& ContextData) const
{
	UObject* querierObject = QueryInstance.Owner.Get();//Get the owner of the query
	if(!querierObject)
	{
		return;
	}
	AActor* querierActor = Cast<AActor>(querierObject);//Cast the owner to an actor	
	if(!querierActor)
	{
		return;
	}
	AAIController* aiController = UAIBlueprintHelperLibrary::GetAIController(querierActor);//Get the AI controller of the actor
	if(!aiController)
	{
		return;
	}
	AHAIController* hAIController = Cast<AHAIController>(aiController);//Cast the AI controller to the HAI controller
	if(!hAIController)
	{
		return;
	}
	AActor* targetActor = hAIController->targetActor;//Get the target actor of the HAI controller
	if(targetActor)
	{
		UEnvQueryItemType_Actor::SetContextHelper(ContextData,targetActor);//Set the target actor as the context
	}
}
