#pragma once
#include "CoreMinimal.h"
#include "EnumAiState.generated.h"

UENUM(BlueprintType)
enum class EnumAiState : uint8 {
    NONE,
    GUARD,
    SEEK,
    REACH,
    FIGHT,
    STRUGGLE,
    WAIT,
    FLEE,
    ATTACKDOOR,
    ATTRACTED,
    TRACK,
    EVADE,
    CHARGE,
    STASIS,
    APPROACH,
    DEAD,
    STASIS_SELF,
    SPAWN,
    STUN,
    ROTATE,
    ATTACK,
    ROLLBACK,
    SPOT,
    HUNT,
    SCRIPTED,
    HARASS,
};

