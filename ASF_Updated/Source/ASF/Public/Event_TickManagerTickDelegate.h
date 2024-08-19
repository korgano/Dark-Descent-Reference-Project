#pragma once
#include "CoreMinimal.h"
#include "Event_TickManagerTickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_TickManagerTick, float, DeltaTime);

