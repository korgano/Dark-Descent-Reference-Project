#pragma once
#include "CoreMinimal.h"
#include "EnumCombatRangeWeaponStep.generated.h"

UENUM(BlueprintType)
enum class EnumCombatRangeWeaponStep : uint8 {
    AIMING_ORIENTATION,
    FIRING,
};

