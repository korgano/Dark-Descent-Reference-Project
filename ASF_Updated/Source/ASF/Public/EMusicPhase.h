#pragma once
#include "CoreMinimal.h"
#include "EMusicPhase.generated.h"

UENUM(BlueprintType)
enum class EMusicPhase : uint8 {
    None,
    ExplorationLowIntensity,
    ExplorationHighIntensity,
    ExplorationNarrative,
    EncounterLowIntensity,
    EncounterHighIntensity,
    EncounterNarrative,
    Count,
};

