#pragma once
#include "CoreMinimal.h"
#include "Event_ARoomCluster_int32Delegate.generated.h"

class ARoomCluster;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ARoomCluster_int32, ARoomCluster*, _RoomCluster, int32, _RoomID);

