#pragma once
#include "CoreMinimal.h"
#include "Event_AWheelHandler_boolDelegate.generated.h"

class AWheelHandler;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AWheelHandler_bool, AWheelHandler*, WheelHandler, bool, B);

