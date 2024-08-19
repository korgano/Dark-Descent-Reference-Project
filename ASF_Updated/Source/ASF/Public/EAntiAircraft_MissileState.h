#pragma once
#include "CoreMinimal.h"
#include "EAntiAircraft_MissileState.generated.h"

UENUM(BlueprintType)
enum class EAntiAircraft_MissileState : uint8 {
    READY,
    LAUNCHED,
    DESTROYED,
};

