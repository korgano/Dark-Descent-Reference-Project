#pragma once
#include "CoreMinimal.h"
#include "EMovementTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EMovementTypeEnum : uint8 {
    MOVE_IN_FORMATION,
    MOVE_UNDERCOVER,
    OVERWATCH_UNDERCOVER,
    OVERWATCH,
};

