#pragma once
#include "CoreMinimal.h"
#include "EnumCanSaveReason.generated.h"

UENUM(BlueprintType)
enum class EnumCanSaveReason : uint8 {
    CAN,
    CANNOT,
    ALLIEN_IN_SIGHT,
    IN_CINEMATIC_MODE,
    IN_TUTO_MODE,
    INTERACTION_OR_SKILL_IN_PROGRESS,
};

