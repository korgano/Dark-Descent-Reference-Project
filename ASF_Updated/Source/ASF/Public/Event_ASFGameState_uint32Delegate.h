#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameState_uint32Delegate.generated.h"

class AASFGameState_TacticalMode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_ASFGameState_uint32, AASFGameState_TacticalMode*, GameState, int32, GainedXP);

