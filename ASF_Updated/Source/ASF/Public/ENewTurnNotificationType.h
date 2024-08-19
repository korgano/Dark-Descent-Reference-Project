#pragma once
#include "CoreMinimal.h"
#include "ENewTurnNotificationType.generated.h"

UENUM(BlueprintType)
enum class ENewTurnNotificationType : uint8 {
    DEATHCLOCK,
    INFESTATION,
    WOUNDS_TREATED_PROSTHESIS_NEEDED,
    WOUNDS_RECOVERY,
    RESEARCH,
    PRODUCTION,
    TRAUMA_TREATED,
    TRAINING,
    TIRED_RESTED,
    EXHAUSTED_RESTED,
    RESOURCE_MISSION,
};

