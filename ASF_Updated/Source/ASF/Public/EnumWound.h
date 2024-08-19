#pragma once
#include "CoreMinimal.h"
#include "EnumWound.generated.h"

UENUM(BlueprintType)
enum class EnumWound : uint8 {
    FULL_LIFE,
    JUST_A_SCRATCH,
    LIGHT_WOUND,
    HEAVY_WOUND,
    DEATH,
};

