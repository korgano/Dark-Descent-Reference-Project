#pragma once
#include "CoreMinimal.h"
#include "EAlienAggressivenessLevelMechanic.generated.h"

UENUM(BlueprintType)
enum class EAlienAggressivenessLevelMechanic : uint8 {
    NONE,
    MASSIVE_ONSLAUGHT,
    BOSS,
    RUNNER,
};

