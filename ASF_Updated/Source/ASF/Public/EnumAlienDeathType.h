#pragma once
#include "CoreMinimal.h"
#include "EnumAlienDeathType.generated.h"

UENUM(BlueprintType)
enum class EnumAlienDeathType : uint8 {
    NONE,
    HEADSHOT,
    DEATH_SPASM,
    PILAR_DEATH,
};

