#pragma once
#include "CoreMinimal.h"
#include "EnumAttackStrenght.generated.h"

UENUM(BlueprintType)
enum class EnumAttackStrenght : uint8 {
    LIGHT,
    MEDIUM,
    HEAVY,
};

