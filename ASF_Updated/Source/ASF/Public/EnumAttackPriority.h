#pragma once
#include "CoreMinimal.h"
#include "EnumAttackPriority.generated.h"

UENUM(BlueprintType)
enum class EnumAttackPriority : uint8 {
    HIGH,
    MEDIUM,
    LOW,
};

