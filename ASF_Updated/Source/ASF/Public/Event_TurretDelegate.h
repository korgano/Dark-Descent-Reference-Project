#pragma once
#include "CoreMinimal.h"
#include "EAntiAircraft_TurretState.h"
#include "Event_TurretDelegate.generated.h"

class AAntiAircraft_Turret;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Turret, AAntiAircraft_Turret*, _Turret, EAntiAircraft_TurretState, State);

