#pragma once
#include "CoreMinimal.h"
#include "EnumObjectiveTier.generated.h"

UENUM(BlueprintType)
enum class EnumObjectiveTier : uint8 {
    PRIMARY,
    SECONDARY,
    TERTIARY,
};

