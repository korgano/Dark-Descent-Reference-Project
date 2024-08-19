#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterHealingPart.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterHealingPart : uint8 {
    NONE,
    LEFT_ARM,
    RIGHT_ARM,
    LEFT_LEG,
    RIGHT_LEG,
    HEAD,
    TORSO,
};

