#pragma once
#include "CoreMinimal.h"
#include "EnumHover.generated.h"

UENUM(BlueprintType)
enum class EnumHover : uint8 {
    SELECTED,
    DANGER,
    HEAVY,
    LIGHT,
    TUTORIAL,
    INFRAREDGOGGLES,
    SELECTABLE,
    Count,
};

