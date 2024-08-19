#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameState_TrackingSystemDelegate.generated.h"

class AASFGameState_TacticalMode;
class UEnnemyTrackingSystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameState_TrackingSystem, AASFGameState_TacticalMode*, GameState, UEnnemyTrackingSystem*, TrackingSystem);

