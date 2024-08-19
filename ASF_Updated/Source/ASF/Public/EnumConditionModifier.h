#pragma once
#include "CoreMinimal.h"
#include "EnumConditionModifier.generated.h"

UENUM(BlueprintType)
enum class EnumConditionModifier : uint8 {
    CONDITION_INVERSE,
    CONDITION_TRUE,
    CONDITION_FALSE,
};

