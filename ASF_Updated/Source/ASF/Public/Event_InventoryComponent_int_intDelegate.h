#pragma once
#include "CoreMinimal.h"
#include "Event_InventoryComponent_int_intDelegate.generated.h"

class UInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_InventoryComponent_int_int, UInventoryComponent*, Inventory, int32, OldValue, int32, NewValue);

