#pragma once
#include "CoreMinimal.h"
#include "Event_DeployableMotionTrackerDelegate.generated.h"

class ADeployableMotionTracker;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_DeployableMotionTracker, ADeployableMotionTracker*, MotionTracker);

