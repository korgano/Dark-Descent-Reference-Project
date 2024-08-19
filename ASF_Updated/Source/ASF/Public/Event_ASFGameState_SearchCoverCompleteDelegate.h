#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameState_SearchCoverCompleteDelegate.generated.h"

class AASFGameState_TacticalMode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameState_SearchCoverComplete, AASFGameState_TacticalMode*, GameState, int32, RoomId);

