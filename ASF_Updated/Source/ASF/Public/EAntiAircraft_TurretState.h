#pragma once
#include "CoreMinimal.h"
#include "EAntiAircraft_TurretState.generated.h"

UENUM(BlueprintType)
enum class EAntiAircraft_TurretState : uint8 {
    IDLE,
    ROTATING,
    READY_TO_FIRE,
};

