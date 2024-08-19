#pragma once
#include "CoreMinimal.h"
#include "EnumOverwatchType.generated.h"

UENUM(BlueprintType)
enum class EnumOverwatchType : uint8 {
    BLEEP,
    DOOR,
    DEPTH,
    INTERACTIBLE,
    PLAYER_FOCUS,
};

