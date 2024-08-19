#pragma once
#include "CoreMinimal.h"
#include "EnumEncounterTriggerType.generated.h"

UENUM(BlueprintType)
enum class EnumEncounterTriggerType : uint8 {
    NONE,
    SIGHT,
    SCREAM,
    EVADE,
};

