#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameModeBase_RoomClusterDelegate.generated.h"

class AASFGameModeBase;
class ARoomCluster;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameModeBase_RoomCluster, AASFGameModeBase*, GameMode, ARoomCluster*, RoomCluster);

