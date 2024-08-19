#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterAnimStance.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterAnimStance : uint8 {
    STANDING,
    CROUCHING,
    HALF_CUTTED,
};

