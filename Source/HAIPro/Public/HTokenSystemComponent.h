

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HTokenSystemComponent.generated.h"

/** for TookTokenFromGivenActor function fail reasons */
UENUM(BlueprintType)
enum class E_TookTokenFailReason : uint8
{
	GivenActorNotValid UMETA(DisplayName = "Given Actor Not Valid"),
	GivenActorHasNoTokenSystemComponent UMETA(DisplayName = "Given Actor Has No Token System Component"),
	TokenCountNotEnough UMETA(DisplayName = "Token Count Not Enough"),
	TokenCountLessOrEqualZero UMETA(DisplayName = "Token Count Less Or Equal Zero")
};

/** for GiveTokenToGivenActor function fail reasons */
UENUM(BlueprintType)
enum class E_GiveTokenFailReason : uint8
{
	GivenActorNotValid UMETA(DisplayName = "Given Actor Not Valid"),
	GivenActorHasNoTokenSystemComponent UMETA(DisplayName = "Given Actor Has No Token System Component"),
	ThereIsNoTokenTakenFromGivenActor UMETA(DisplayName = "There Is No Token Taken From Given Actor"),
	TakenTokenCountLessOrEqualZero UMETA(DisplayName = "Took Token Count Less Or Equal Zero"),
	TakenTokenCountNotEnoughForGiveItToBack UMETA(DisplayName = "Taken Token Count Not Enough For Give It To Back")
};

UENUM(BlueprintType)
enum class E_TokenManagmentFailReason : uint8
{
	GivenActorNotValid UMETA(DisplayName = "Given Actor Not Valid"),
	GivenActorHasNoTokenSystemComponent UMETA(DisplayName = "Given Actor Has No Token System Component")
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HAIPRO_API UHTokenSystemComponent : public UActorComponent
{
	GENERATED_BODY()

	UHTokenSystemComponent();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
public:
	/** Trying to get tokens from the given actor */
	UFUNCTION(BlueprintCallable, Category="HTokenSystem")
	bool TookTokenFromGivenActor(AActor* GivenActor, int TokenCount, E_TookTokenFailReason& FailReason);
	UFUNCTION()
	void OnDestroyedGivenActor(AActor* DestroyedActor);
	/** Trying to give tokens to the given actor */
	UFUNCTION(BlueprintCallable, Category="HTokenSystem")
	bool GiveTokenToGivenActor(AActor* GivenActor, int TokenCount, E_GiveTokenFailReason& FailReason);
	/** Increase the current token count to the given actor's token count */
	UFUNCTION(BlueprintCallable, Category="HTokenSystem")
	void IncreaseCurrentTokenToGivenActor(AActor* GivenActor, int TokenCount, E_TokenManagmentFailReason& FailReason);
	/** Increase the max token count to the given actor's token count */
	UFUNCTION(BlueprintCallable, Category="HTokenSystem")
	void IncreaseMaxTokenCountToGivenActor(AActor* GivenActor, int TokenCount, E_TokenManagmentFailReason& FailReason);
	/** Decraese the current token count to the given actor's token count */
	UFUNCTION(BlueprintCallable, Category="HTokenSystem")
	void DecraeseCurrentTokenToGivenActor(AActor* GivenActor, int TokenCount, E_TokenManagmentFailReason& FailReason);
	/** Decraese the max token count to the given actor's token count */
	UFUNCTION(BlueprintCallable, Category="HTokenSystem")
	void DecraeseMaxTokenCountToGivenActor(AActor* GivenActor, int TokenCount, E_TokenManagmentFailReason& FailReason);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="HTokenSystem")
	int currentTokenCount = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="HTokenSystem")
	int maxTokenCount = 1;
	/** This map is used for storing the token counts for each actor */
	UPROPERTY()
	TMap<TWeakObjectPtr<AActor>, int> TokenCountMap;
	UFUNCTION(BlueprintPure, Category="HTokenSystem")
	FORCEINLINE int GetTargetsCurrentTokenCount(AActor* TargetActor) const;
};
