#pragma once
#include "CoreMinimal.h"
#include "EnumBlendStopType.generated.h"

UENUM(BlueprintType)
enum class EnumBlendStopType : uint8 {
    MIRROR_TO_MIRROR,
    MIRROR_TO_STRAIGHT,
    STRAIGHT_TO_MIRROR,
    STRAIGHT_TO_STRAIGHT,
};

