
#include "HPatrolSpline.h"

AHPatrolSpline::AHPatrolSpline()
{
	PrimaryActorTick.bCanEverTick = false;

	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	RootComponent = SplineComponent;
}

void AHPatrolSpline::PatrolDataOwnerDestroyed(AActor* DestroyedActor)
{
	PatrolDataMap.Remove(DestroyedActor);
}

FVector AHPatrolSpline::MoveNextPatrolPoint(AActor* RequestedBy)
{
	if (!RequestedBy) { return FVector::ZeroVector; }
	
	F_PatrolData* data = PatrolDataMap.Find(RequestedBy);
	if (!data)
	{
		F_PatrolData newData;
		newData.previousPointIndex = 0;
		newData.currentPointIndex = 0;
		newData.direction = 1;
		newData.patrolPointCount = SplineComponent->GetNumberOfSplinePoints();
		RequestedBy->OnDestroyed.AddDynamic(this, &AHPatrolSpline::PatrolDataOwnerDestroyed);
		PatrolDataMap.Add(RequestedBy, newData);
		data = PatrolDataMap.Find(RequestedBy);
	}
	FVector currentLocation = SplineComponent->GetLocationAtSplinePoint(data->currentPointIndex, ESplineCoordinateSpace::World);
	if (data->currentPointIndex + 1 == data->patrolPointCount)
	{
		data->direction = -1;
	}
	if (data->currentPointIndex == 0)
	{
		data->direction = 1;
	}
	data->previousPointIndex = data->currentPointIndex;
	/** if direction is 1 it is going to next point but if it is -1 it is going to previous point */
	data->currentPointIndex += data->direction;
	return currentLocation;
}

void AHPatrolSpline::ChangeDirection(const AActor* RequestedBy)
{
	if (!RequestedBy) { return; }
	if (F_PatrolData* data = PatrolDataMap.Find(RequestedBy))
	{
		data->direction *= -1;
	}
}

