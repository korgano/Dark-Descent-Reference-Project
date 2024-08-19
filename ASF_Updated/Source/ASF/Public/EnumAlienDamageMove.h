#pragma once
#include "CoreMinimal.h"
#include "EnumAlienDamageMove.generated.h"

UENUM(BlueprintType)
enum class EnumAlienDamageMove : uint8 {
    NONE,
    TAKE_DAMAGE_HEAD_LEFT,
    TAKE_DAMAGE_HEAD_RIGHT,
    DODGE_LEFT,
    DODGE_RIGHT,
};

