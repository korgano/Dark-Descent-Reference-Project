#pragma once
#include "CoreMinimal.h"
#include "EDisplayEnemyHealth.generated.h"

UENUM(BlueprintType)
enum class EDisplayEnemyHealth : uint8 {
    Always,
    SlowMoOnly,
    Never,
};

