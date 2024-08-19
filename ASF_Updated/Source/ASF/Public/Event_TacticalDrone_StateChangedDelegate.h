#pragma once
#include "CoreMinimal.h"
#include "ETacticalDroneState.h"
#include "Event_TacticalDrone_StateChangedDelegate.generated.h"

class ATacticalDrone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEvent_TacticalDrone_StateChanged, ATacticalDrone*, _Drone, ETacticalDroneState, _OldState, ETacticalDroneState, _NewState);

