#pragma once
#include "CoreMinimal.h"
#include "EnumEvadeOnFight.generated.h"

UENUM(BlueprintType)
enum class EnumEvadeOnFight : uint8 {
    LIGHT_WOUND,
    HEAVY_WOUND,
    GRENADE,
    FLAME_THROWER,
};

