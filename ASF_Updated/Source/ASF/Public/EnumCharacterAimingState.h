#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterAimingState.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterAimingState : uint8 {
    IDLE,
    LOOK_AT,
    AIMING,
};

