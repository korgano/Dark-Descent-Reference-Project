#pragma once
#include "CoreMinimal.h"
#include "Event_ImportPS4SlotDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ImportPS4Slot, bool, bSuccess);

