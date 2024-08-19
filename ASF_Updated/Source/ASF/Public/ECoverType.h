#pragma once
#include "CoreMinimal.h"
#include "ECoverType.generated.h"

UENUM(BlueprintType)
enum class ECoverType : uint8 {
    NONE,
    SOFT_COVER,
    HARD_COVER,
};

