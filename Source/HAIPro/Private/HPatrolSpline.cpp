
#include "HPatrolSpline.h"
#include "Components/SplineComponent.h"

AHPatrolSpline::AHPatrolSpline()
{
	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	RootComponent = SplineComponent;

	direction = 1;
	currentPointIndex = 0;
}


void AHPatrolSpline::PatrolRouteIndex()
{
	currentPointIndex += direction;
	if(currentPointIndex == SplineComponent->GetNumberOfSplinePoints() -1)
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

FVector AHPatrolSpline::GetPatrolRouteLocation()
{
	FVector splineLocalPoint = SplineComponent->GetLocationAtSplinePoint(currentPointIndex, ESplineCoordinateSpace::World);
	return splineLocalPoint;
}
