#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterAbductionState.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterAbductionState : uint8 {
    NONE,
    IDLE,
    MOVE,
};

