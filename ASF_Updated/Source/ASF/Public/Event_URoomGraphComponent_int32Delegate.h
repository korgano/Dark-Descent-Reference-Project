#pragma once
#include "CoreMinimal.h"
#include "Event_URoomGraphComponent_int32Delegate.generated.h"

class URoomGraphComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_URoomGraphComponent_int32, URoomGraphComponent*, _RoomGraphComponent, int32, _GraphID);

