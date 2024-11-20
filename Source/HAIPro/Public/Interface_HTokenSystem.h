

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interface_HTokenSystem.generated.h"


UINTERFACE(MinimalAPI)
class UInterface_HTokenSystem : public UInterface
{
	GENERATED_BODY()
};

class HAIPRO_API IInterface_HTokenSystem
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, Category = "HToken")
	bool TookToken(int amount);//Interface function for taking token from the target
	UFUNCTION(BlueprintNativeEvent, Category = "HToken")
	void GiveToken(int amount);//Interface function for giving token to the target
};
