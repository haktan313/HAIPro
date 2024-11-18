//HPatrolSpline
//It is an actor that is used to create a patrol route with splines for AI characters.

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
	void PatrolRouteIndex();//Increase the current point index and change the direction if needed
	
	FVector GetPatrolRouteLocation();//Get the location of the current point
private:

	int currentPointIndex;
	UPROPERTY(meta=(ClampMin="-1",ClampMax="1"))
	int direction;

	class USplineComponent* SplineComponent;

};
