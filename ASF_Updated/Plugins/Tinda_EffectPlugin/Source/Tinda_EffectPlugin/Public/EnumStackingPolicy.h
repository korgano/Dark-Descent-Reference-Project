#pragma once
#include "CoreMinimal.h"
#include "EnumStackingPolicy.generated.h"

UENUM(BlueprintType)
enum class EnumStackingPolicy : uint8 {
    REFRESH,
    PARALLEL,
};

