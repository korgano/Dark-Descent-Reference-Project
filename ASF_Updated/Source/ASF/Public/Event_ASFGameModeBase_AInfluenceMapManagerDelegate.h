#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameModeBase_AInfluenceMapManagerDelegate.generated.h"

class AASFGameModeBase_TacticalMode;
class AInfluenceMapManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameModeBase_AInfluenceMapManager, AASFGameModeBase_TacticalMode*, GameMode, AInfluenceMapManager*, InfluenceMapManager);

