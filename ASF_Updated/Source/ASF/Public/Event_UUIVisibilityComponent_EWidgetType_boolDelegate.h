#pragma once
#include "CoreMinimal.h"
#include "EWidgetType.h"
#include "Event_UUIVisibilityComponent_EWidgetType_boolDelegate.generated.h"

class UUIVisibilityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_UUIVisibilityComponent_EWidgetType_bool, UUIVisibilityComponent*, UIVisibilityComponent, EWidgetType, WidgetType, bool, B);

