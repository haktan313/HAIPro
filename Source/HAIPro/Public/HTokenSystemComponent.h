//HTokenSystemComponent
// It is a component that is attached to an AI character. It is responsible for token things.
// Tokens are used to determine the priority of which AI character to do actions with took tokens.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HTokenSystemComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HAIPRO_API UHTokenSystemComponent : public UActorComponent
{
	GENERATED_BODY()
	
	bool TookToken(int amount);//Take token
	void GiveToken(int amount);//Give token

public:
	UFUNCTION(BlueprintCallable, Category = "HToken")
	bool TookTokenFromTarget(int amount, AActor* targetActor);//Take token from the target
	UFUNCTION(BlueprintCallable, Category = "HToken")
	void GiveTokenToTarget(int amount, AActor* targetActor);//Give token to the target
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HToken")
	int currentToken = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HToken")
	TMap<AActor*, int> TokenMap;//Map for finding from which target how many tokens are taken
		
};
