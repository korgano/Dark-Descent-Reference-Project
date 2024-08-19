#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TriggerInfo.h"
#include "InventoryTriggerInfo.generated.h"

class AASFPlayerState;
class ASquad;
class UInventoryComponent;

UCLASS(Blueprintable)
class ASF_API UInventoryTriggerInfo : public UTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbItemToReach;
    
    UInventoryTriggerInfo();

    UFUNCTION(BlueprintCallable)
    void OnSuppliesQuantityChanged(UInventoryComponent* Inventory, FGameplayTag Tag, int32 OldValue, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* PlayerState, ASquad* Squad);
    
};

