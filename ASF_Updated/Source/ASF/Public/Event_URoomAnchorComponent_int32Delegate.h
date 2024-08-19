#pragma once
#include "CoreMinimal.h"
#include "Event_URoomAnchorComponent_int32Delegate.generated.h"

class URoomAnchorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_URoomAnchorComponent_int32, URoomAnchorComponent*, _RoomAnchorComponent, int32, _GraphID);

