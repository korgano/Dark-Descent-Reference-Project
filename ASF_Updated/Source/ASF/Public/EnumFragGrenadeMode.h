#pragma once
#include "CoreMinimal.h"
#include "EnumFragGrenadeMode.generated.h"

UENUM(BlueprintType)
enum class EnumFragGrenadeMode : uint8 {
    CLASSIC,
    HIGH_RAYCAST,
    LOW_RAYCAST_AND_RADIUS,
};

