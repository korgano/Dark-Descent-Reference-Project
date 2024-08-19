#pragma once
#include "CoreMinimal.h"
#include "Event_UWheelComponent_boolDelegate.generated.h"

class UWheelComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UWheelComponent_bool, UWheelComponent*, WheelComponent, bool, B);

