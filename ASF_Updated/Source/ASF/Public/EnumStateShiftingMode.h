#pragma once
#include "CoreMinimal.h"
#include "EnumStateShiftingMode.generated.h"

UENUM(BlueprintType)
enum class EnumStateShiftingMode : uint8 {
    SOFT_SHIFTING,
    FORCE_SHIFTING,
};

