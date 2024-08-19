#pragma once
#include "CoreMinimal.h"
#include "EnumComparisonOperator.generated.h"

UENUM(BlueprintType)
enum class EnumComparisonOperator : uint8 {
    INFERIOR,
    SUPERIOR,
    EQUAL,
    DIFFERENT,
};

