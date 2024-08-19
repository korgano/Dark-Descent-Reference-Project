#pragma once
#include "CoreMinimal.h"
#include "EMarineListSortingOption.generated.h"

UENUM(BlueprintType)
enum class EMarineListSortingOption : uint8 {
    CLASS,
    LEVEL_DECREASING,
    LEVEL_INCREASING,
    CARE_DURATION,
    TRAUMA,
    LEVEL_UP,
    AVAILABLE_UPGRADES,
    TRAINING,
};

