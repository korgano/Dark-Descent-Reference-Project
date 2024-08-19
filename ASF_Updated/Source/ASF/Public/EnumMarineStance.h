#pragma once
#include "CoreMinimal.h"
#include "EnumMarineStance.generated.h"

UENUM(BlueprintType)
enum class EnumMarineStance : uint8 {
    GROUPED,
    DETACHED,
    OUTRANGE,
    PANICED,
};

