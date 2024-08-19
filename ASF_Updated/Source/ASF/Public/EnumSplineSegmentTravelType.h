#pragma once
#include "CoreMinimal.h"
#include "EnumSplineSegmentTravelType.generated.h"

UENUM(BlueprintType)
enum class EnumSplineSegmentTravelType : uint8 {
    CRAWL,
    JUMP,
    JUMP_DOWNWARD,
    JUMP_UPWARD,
};

