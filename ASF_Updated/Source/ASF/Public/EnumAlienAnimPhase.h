#pragma once
#include "CoreMinimal.h"
#include "EnumAlienAnimPhase.generated.h"

UENUM(BlueprintType)
enum class EnumAlienAnimPhase : uint8 {
    SPAWN,
    PATROL,
    REACH,
    APPROACH,
    BATTLEMODE,
    SEEK,
    STASIS,
    SPOT,
};

