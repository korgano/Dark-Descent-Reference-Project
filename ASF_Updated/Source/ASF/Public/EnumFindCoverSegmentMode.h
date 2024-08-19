#pragma once
#include "CoreMinimal.h"
#include "EnumFindCoverSegmentMode.generated.h"

UENUM(BlueprintType)
enum class EnumFindCoverSegmentMode : uint8 {
    NONE,
    CLOSEST,
    NORMAL_INVALIDATION,
};

