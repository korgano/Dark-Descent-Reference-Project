#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SubObjectiveComponent.h"
#include "InventorySubObjectiveComponent.generated.h"

class AASFPlayerState;
class ASquad;
class UInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInventorySubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextFormat;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 countItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FText BaseSubObjectiveTextKey;
    
public:
    UInventorySubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryToTriggerTriggerInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSuppliesQuantityChanged(UInventoryComponent* Inventory, FGameplayTag Tag, int32 OldValue, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad);
    
};

