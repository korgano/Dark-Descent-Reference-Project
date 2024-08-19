#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventEffectCategory.generated.h"

UENUM(BlueprintType)
enum class EOtagoEventEffectCategory : uint8 {
    NEUTRAL,
    POSITIVE,
    NEGATIVE,
    NIL,
    COST,
};

