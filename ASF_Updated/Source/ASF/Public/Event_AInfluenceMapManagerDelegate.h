#pragma once
#include "CoreMinimal.h"
#include "Event_AInfluenceMapManagerDelegate.generated.h"

class AInfluenceMapManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_AInfluenceMapManager, AInfluenceMapManager*, InfluenceMapManager);

