#pragma once
#include "CoreMinimal.h"
#include "EAntiAircraft_MissileState.h"
#include "Event_MissileDelegate.generated.h"

class AAntiAircraft_Missile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_Missile, AAntiAircraft_Missile*, _Missile, EAntiAircraft_MissileState, State);

