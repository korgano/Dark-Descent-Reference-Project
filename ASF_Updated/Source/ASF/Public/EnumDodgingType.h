#pragma once
#include "CoreMinimal.h"
#include "EnumDodgingType.generated.h"

UENUM(BlueprintType)
enum class EnumDodgingType : uint8 {
    DASH_SIDE,
    DASH_FRONT,
    DASH_OBSTACLE,
    DASH_AVOID_THREAT,
};

