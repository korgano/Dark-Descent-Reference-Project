#pragma once
#include "CoreMinimal.h"
#include "Event_UNavAreaClassDetection_NavArea_NavAreaDelegate.generated.h"

class UNavAreaClassDetection;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_UNavAreaClassDetection_NavArea_NavArea, UNavAreaClassDetection*, NavAreaClassDetection, int32, OldGraphID, int32, NewGraphID);

