#pragma once
#include "CoreMinimal.h"
#include "Event_PerceptionComponent_BoolDelegate.generated.h"

class UAI_POIPerceptionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_PerceptionComponent_Bool, UAI_POIPerceptionComponent*, _PerceptionComp);

