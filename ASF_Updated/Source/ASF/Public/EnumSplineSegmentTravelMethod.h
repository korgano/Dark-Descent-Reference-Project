#pragma once
#include "CoreMinimal.h"
#include "EnumSplineSegmentTravelMethod.generated.h"

UENUM(BlueprintType)
enum class EnumSplineSegmentTravelMethod : uint8 {
    DURATION,
    SPEED,
};

