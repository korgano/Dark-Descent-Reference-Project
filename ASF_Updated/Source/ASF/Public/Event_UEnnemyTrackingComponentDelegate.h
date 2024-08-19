#pragma once
#include "CoreMinimal.h"
#include "Event_UEnnemyTrackingComponentDelegate.generated.h"

class UEnnemyTrackingComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_UEnnemyTrackingComponent, UEnnemyTrackingComponent*, InteractiveActor);

