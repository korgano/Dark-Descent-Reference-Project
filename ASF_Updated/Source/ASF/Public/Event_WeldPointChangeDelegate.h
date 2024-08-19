#pragma once
#include "CoreMinimal.h"
#include "Event_WeldPointChangeDelegate.generated.h"

class ADoor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_WeldPointChange, ADoor*, Door, int32, OldValue, int32, NewValue);

