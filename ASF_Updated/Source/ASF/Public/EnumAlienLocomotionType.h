#pragma once
#include "CoreMinimal.h"
#include "EnumAlienLocomotionType.generated.h"

UENUM(BlueprintType)
enum class EnumAlienLocomotionType : uint8 {
    RUN2LEG,
    RUN2LEG_FASTER,
    WALK,
    GALOP,
    CRAWL,
    NONE,
};

