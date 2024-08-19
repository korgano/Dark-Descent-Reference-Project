#pragma once
#include "CoreMinimal.h"
#include "EnumStopType.h"
#include "Event_StopTypeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_StopType, float, _StopDuration, EnumStopType, _AlienStopType);

