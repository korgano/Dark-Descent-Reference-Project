#pragma once
#include "CoreMinimal.h"
#include "Event_UMapFeedbackDataComponent_BoolDelegate.generated.h"

class UMapFeedbackDataComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_UMapFeedbackDataComponent_Bool, UMapFeedbackDataComponent*, MovingObject, bool, MotionTrackerVisibility);

