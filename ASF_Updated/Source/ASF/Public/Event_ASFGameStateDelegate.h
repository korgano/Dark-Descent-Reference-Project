#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameStateDelegate.generated.h"

class AASFGameState_TacticalMode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEvent_ASFGameState, AASFGameState_TacticalMode*, GameState);

