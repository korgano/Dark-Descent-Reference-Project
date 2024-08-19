#pragma once
#include "CoreMinimal.h"
#include "EnumEnemyTrackingAccuracy.generated.h"

UENUM(BlueprintType)
enum class EnumEnemyTrackingAccuracy : uint8 {
    NONE,
    LOW,
    MEDIUM,
    HIGH,
};

