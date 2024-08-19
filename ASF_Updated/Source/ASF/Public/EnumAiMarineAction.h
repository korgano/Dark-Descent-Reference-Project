#pragma once
#include "CoreMinimal.h"
#include "EnumAiMarineAction.generated.h"

UENUM(BlueprintType)
enum class EnumAiMarineAction : uint8 {
    ACQUIRE,
    SHIFT,
    MELEE_ATTACK,
    WANDER,
    COVER,
    KITE,
    CROUCH,
    ADORE,
    GRENADE,
    PATROL,
    SEARCH,
    NO_COVER_TO_COVER,
    BREACH,
    WAIT,
    MOVE,
    PATROL_GROUP,
    TRACK,
    SEEK,
};

