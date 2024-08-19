#pragma once
#include "CoreMinimal.h"
#include "EnumCrusherChargeType.generated.h"

UENUM(BlueprintType)
enum class EnumCrusherChargeType : uint8 {
    GALOP_DASH,
    GALOP_NO_DASH,
    CRAWL_DASH,
    CRAWL_NO_DASH,
};

