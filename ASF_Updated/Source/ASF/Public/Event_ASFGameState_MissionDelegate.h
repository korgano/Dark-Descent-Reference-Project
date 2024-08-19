#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameState_MissionDelegate.generated.h"

class AASFGameState_TacticalMode;
class AMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameState_Mission, AASFGameState_TacticalMode*, GameState, AMission*, Mission);

