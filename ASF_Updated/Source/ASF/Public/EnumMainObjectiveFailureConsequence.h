#pragma once
#include "CoreMinimal.h"
#include "EnumMainObjectiveFailureConsequence.generated.h"

UENUM(BlueprintType)
enum class EnumMainObjectiveFailureConsequence : uint8 {
    RETRIABLE,
    NOT_RETRIABLE,
    GAME_OVER,
};

