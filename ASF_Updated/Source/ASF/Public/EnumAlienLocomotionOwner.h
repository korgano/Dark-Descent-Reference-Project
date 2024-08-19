#pragma once
#include "CoreMinimal.h"
#include "EnumAlienLocomotionOwner.generated.h"

UENUM(BlueprintType)
enum class EnumAlienLocomotionOwner : uint8 {
    SPLINE,
    INGAME,
    HIVE,
    SLIDE,
};

