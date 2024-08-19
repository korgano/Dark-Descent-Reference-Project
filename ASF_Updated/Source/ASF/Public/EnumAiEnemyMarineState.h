#pragma once
#include "CoreMinimal.h"
#include "EnumAiEnemyMarineState.generated.h"

UENUM(BlueprintType)
enum class EnumAiEnemyMarineState : uint8 {
    GUARD,
    PATROL,
    TRACK,
    SEEK,
    FIGHT,
    INVESTIGATE,
    SCRIPTED,
    SQUAD_ORDER,
    NONE,
    GUARD_ALERTED,
};

