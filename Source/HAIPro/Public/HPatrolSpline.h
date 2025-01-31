
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HPatrolSpline.generated.h"

UCLASS()
class HAIPRO_API AHPatrolSpline : public AActor
{
	GENERATED_BODY()

	AHPatrolSpline();
public:
	void PatrolRouteIndex();
	
	FVector GetPatrolRouteLocation();
private:

	int currentPointIndex;
	UPROPERTY(meta=(ClampMin="-1",ClampMax="1"))
	int direction;

	UPROPERTY()
	class USplineComponent* SplineComponent;

};
