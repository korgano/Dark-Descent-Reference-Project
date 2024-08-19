#pragma once
#include "CoreMinimal.h"
#include "EDroneCombatStance.h"
#include "Event_SquadDrone_DroneCombatStanceChangedDelegate.generated.h"

class ASquadDrone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_SquadDrone_DroneCombatStanceChanged, ASquadDrone*, _SquadDrone, EDroneCombatStance, _OldState, EDroneCombatStance, _NewState);

