#pragma once
#include "CoreMinimal.h"
#include "Event_UAIActionComponent_bool_boolDelegate.generated.h"

class UAIActionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_UAIActionComponent_bool_bool, UAIActionComponent*, UAIActionComponent, bool, _ForceActionAbort, bool, _ForceAnimationAbort);

