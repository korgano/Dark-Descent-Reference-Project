#pragma once
#include "CoreMinimal.h"
#include "Event_ARoomClusterDelegate.generated.h"

class ARoomCluster;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ARoomCluster, ARoomCluster*, RoomCluster);

