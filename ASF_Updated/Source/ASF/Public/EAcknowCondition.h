#pragma once
#include "CoreMinimal.h"
#include "EAcknowCondition.generated.h"

UENUM(BlueprintType)
enum class EAcknowCondition : uint8 {
    NONE,
    GAME_PHASE,
    STRESSED,
    WOUNDED,
    BLEEDING,
    BREAKDOWN,
};

