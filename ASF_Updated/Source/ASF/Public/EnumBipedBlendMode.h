#pragma once
#include "CoreMinimal.h"
#include "EnumBipedBlendMode.generated.h"

UENUM(BlueprintType)
enum class EnumBipedBlendMode : uint8 {
    FULL_LOCOMOTION,
    FULL_AIMING,
    BLEND_LOCOMOTION_AIMING,
};

