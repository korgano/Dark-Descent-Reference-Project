#pragma once
#include "CoreMinimal.h"
#include "EnumBipedLocomotionRun.generated.h"

UENUM(BlueprintType)
enum class EnumBipedLocomotionRun : uint8 {
    WALK2LEGS_GALOP,
    WALK2LEGS_RUN,
    CRAWL_GALOP,
    CRAWL_RUN,
};

