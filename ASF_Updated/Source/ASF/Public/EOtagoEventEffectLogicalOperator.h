#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventEffectLogicalOperator.generated.h"

UENUM(BlueprintType)
enum class EOtagoEventEffectLogicalOperator : uint8 {
    ALL_EFFECTS,
    ANY_EFFECT,
};

