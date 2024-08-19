#pragma once
#include "CoreMinimal.h"
#include "Event_LoadPS4SlotsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_LoadPS4Slots, bool, bSuccess);

