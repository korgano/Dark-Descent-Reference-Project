#pragma once
#include "CoreMinimal.h"
#include "EnumAlienAttackType.generated.h"

UENUM(BlueprintType)
enum class EnumAlienAttackType : uint8 {
    NONE,
    CLAW_ATTACK,
    TAIL_ATTACK,
    COMBO_ATTACK,
    JUMP_ATTACK,
    TACKLE_ATTACK,
    STUN_ATTACK,
    TAIL_SWING,
    QUEEN_EXECUTION,
    QUEEN_GRAB,
    FIRST_ATTACK,
};

