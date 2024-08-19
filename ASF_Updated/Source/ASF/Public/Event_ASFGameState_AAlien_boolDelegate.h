#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameState_AAlien_boolDelegate.generated.h"

class AASFGameState_TacticalMode;
class AAlien;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_ASFGameState_AAlien_bool, AASFGameState_TacticalMode*, GameState, AAlien*, Alien, bool, bValue);

