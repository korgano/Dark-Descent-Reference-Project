#pragma once
#include "CoreMinimal.h"
#include "Event_ASFGameState_ACharacter_boolDelegate.generated.h"

class AASFCharacter;
class AASFGameState_TacticalMode;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_ASFGameState_ACharacter_bool, AASFGameState_TacticalMode*, GameState, AASFCharacter*, Character, bool, bValue);

