#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_InventoryComponent_FGameplayTag_int_intDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEvent_InventoryComponent_FGameplayTag_int_int, UInventoryComponent*, Inventory, FGameplayTag, Tag, int32, OldValue, int32, NewValue);

