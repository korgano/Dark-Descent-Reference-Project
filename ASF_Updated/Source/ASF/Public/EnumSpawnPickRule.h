#pragma once
#include "CoreMinimal.h"
#include "EnumSpawnPickRule.generated.h"

UENUM(BlueprintType)
enum class EnumSpawnPickRule : uint8 {
    CLOSEST,
    FARTHEST,
    RANDOM,
};

