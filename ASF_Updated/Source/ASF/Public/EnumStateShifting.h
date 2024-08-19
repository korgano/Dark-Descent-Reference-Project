#pragma once
#include "CoreMinimal.h"
#include "EnumStateShifting.generated.h"

UENUM(BlueprintType)
enum class EnumStateShifting : uint8 {
    AUTHORIZED,
    SHIFTING,
    UNAUTHORIZED,
};

