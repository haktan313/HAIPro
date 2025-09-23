
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "HPatrolSpline.generated.h"

USTRUCT(BlueprintType)
struct F_PatrolData 
{
	GENERATED_BODY()

	F_PatrolData() : currentPointIndex(0), previousPointIndex(0), direction(1), patrolPointCount(2) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PatrolData")
	int currentPointIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PatrolData")
	int previousPointIndex;
	/**for setting up currentPointIndex */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PatrolData",meta=(ClampMin="-1",ClampMax="1"))
	int direction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PatrolData")
	int patrolPointCount; 
};

UCLASS()
class HAIPRO_API AHPatrolSpline : public AActor
{
	GENERATED_BODY()

	AHPatrolSpline();
	UFUNCTION()
	void PatrolDataOwnerDestroyed(AActor* DestroyedActor);
public:
	/** if there is any valid data for Requested Actor it is increasing pointIndex to next but if it is not valid this function creating new one */
	UFUNCTION(BlueprintCallable, Category = "HAI|PatrolSpline")
	FVector MoveNextPatrolPoint(AActor* RequestedBy);
	
	UFUNCTION(BlueprintCallable, Category = "HAI|PatrolSpline")
	void ChangeDirection(const AActor* RequestedBy);

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	TObjectPtr<USplineComponent> SplineComponent;
	UPROPERTY()
	TMap<TWeakObjectPtr<AActor>, F_PatrolData> PatrolDataMap;

};
