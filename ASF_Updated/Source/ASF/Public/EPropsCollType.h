#pragma once
#include "CoreMinimal.h"
#include "EPropsCollType.generated.h"

UENUM(BlueprintType)
enum class EPropsCollType : uint8 {
    ONLY_NAV_BLOCKER,
    HALF_COVER,
    HIGH_COVER,
    NEG_SPACE,
};

