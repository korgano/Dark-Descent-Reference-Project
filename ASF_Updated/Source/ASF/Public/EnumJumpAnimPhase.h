#pragma once
#include "CoreMinimal.h"
#include "EnumJumpAnimPhase.generated.h"

UENUM(BlueprintType)
enum class EnumJumpAnimPhase : uint8 {
    NONE,
    DODGING,
    JUMP,
    DIRECT_JUMP,
    JUMP_ATTACK,
    REACH_DASH,
    JUMP_OVER_OBSTACLE,
};

