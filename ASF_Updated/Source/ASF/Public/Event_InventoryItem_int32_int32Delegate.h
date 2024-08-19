#pragma once
#include "CoreMinimal.h"
#include "Event_InventoryItem_int32_int32Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_InventoryItem_int32_int32, int32, _OldValue, int32, NewValue);

