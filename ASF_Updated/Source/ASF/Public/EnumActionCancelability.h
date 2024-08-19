#pragma once
#include "CoreMinimal.h"
#include "EnumActionCancelability.generated.h"

UENUM(BlueprintType)
enum class EnumActionCancelability : uint8 {
    SOFT_CANCALABLE,
    HARD_CANCALABLE,
    NOT_CANCALABLE,
};

