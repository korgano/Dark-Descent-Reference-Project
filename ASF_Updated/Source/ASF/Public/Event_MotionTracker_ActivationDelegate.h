#pragma once
#include "CoreMinimal.h"
#include "Event_MotionTracker_ActivationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_MotionTracker_Activation, bool, bIsMotionTrackerActivated);

