#pragma once
#include "CoreMinimal.h"
#include "EnumAlienAttackSide.generated.h"

UENUM(BlueprintType)
enum class EnumAlienAttackSide : uint8 {
    FROM_FRONT,
    FROM_BACK,
    FROM_RIGHT,
    FROM_LEFT,
    FROM_UP,
    FROM_DOWN,
    TARGET_LEGS,
};

