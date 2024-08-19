#pragma once
#include "CoreMinimal.h"
#include "Event_ACursor3D_BoolDelegate.generated.h"

class ACursor3D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ACursor3D_Bool, ACursor3D*, Cursor3D, bool, Value);

