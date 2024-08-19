#pragma once
#include "CoreMinimal.h"
#include "EnumFilterType.generated.h"

UENUM(BlueprintType)
enum class EnumFilterType : uint8 {
    CONDITION,
    WEIGHT,
    CONDITION_WEIGHT,
};

