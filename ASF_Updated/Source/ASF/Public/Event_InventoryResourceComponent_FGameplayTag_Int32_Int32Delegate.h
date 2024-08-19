#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Event_InventoryResourceComponent_FGameplayTag_Int32_Int32Delegate.generated.h"

class UInventoryResourceComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEvent_InventoryResourceComponent_FGameplayTag_Int32_Int32, UInventoryResourceComponent*, Inventory, FGameplayTag, Tag, int32, OldValue, int32, NewValue);

