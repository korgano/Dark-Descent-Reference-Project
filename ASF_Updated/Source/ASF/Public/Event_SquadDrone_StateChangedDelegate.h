#pragma once
#include "CoreMinimal.h"
#include "ETacticalDroneState.h"
#include "Event_SquadDrone_StateChangedDelegate.generated.h"

class ASquadDrone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_SquadDrone_StateChanged, ASquadDrone*, _SquadDrone, ETacticalDroneState, _OldState, ETacticalDroneState, _NewState);

