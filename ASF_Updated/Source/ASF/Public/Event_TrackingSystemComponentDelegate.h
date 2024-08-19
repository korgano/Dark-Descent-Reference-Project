#pragma once
#include "CoreMinimal.h"
#include "Event_TrackingSystemComponentDelegate.generated.h"

class UTrackingSystemComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_TrackingSystemComponent, UTrackingSystemComponent*, TrackingSystemComponent);

