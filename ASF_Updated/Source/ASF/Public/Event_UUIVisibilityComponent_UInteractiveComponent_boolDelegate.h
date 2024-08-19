#pragma once
#include "CoreMinimal.h"
#include "Event_UUIVisibilityComponent_UInteractiveComponent_boolDelegate.generated.h"

class UInteractiveComponent;
class UUIVisibilityComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_UUIVisibilityComponent_UInteractiveComponent_bool, UUIVisibilityComponent*, UIVisibilityComponent, UInteractiveComponent*, InteractiveComponent, bool, B);

