


#include "HPatrolSpline.h"
#include "Components/SplineComponent.h"

AHPatrolSpline::AHPatrolSpline()
{
	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	RootComponent = SplineComponent;

	direction = 1;
	currentPointIndex = 0;
}

//Increase the current point index and change the direction if needed
void AHPatrolSpline::PatrolRouteIndex()
{
	currentPointIndex += direction;
	if(currentPointIndex == SplineComponent->GetNumberOfSplinePoints() -1)//If the current point index is the last point
	{
		direction = -1;
	}
	else
	{
		if(currentPointIndex == 0)
		{
			direction = 1;
		}
	}
}

//Get the location of the current point
FVector AHPatrolSpline::GetPatrolRouteLocation()
{
	FVector splineLocalPoint = SplineComponent->GetLocationAtSplinePoint(currentPointIndex, ESplineCoordinateSpace::World);//Get the location of the current point
	return splineLocalPoint;
}
