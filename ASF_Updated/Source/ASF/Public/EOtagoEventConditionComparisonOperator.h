#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventConditionComparisonOperator.generated.h"

UENUM(BlueprintType)
enum class EOtagoEventConditionComparisonOperator : uint8 {
    EQUAL,
    NOT_EQUAL,
    GREATER,
    GREATER_OR_EQUAL,
    LESS,
    LESS_OR_EQUAL,
    NONE,
};

