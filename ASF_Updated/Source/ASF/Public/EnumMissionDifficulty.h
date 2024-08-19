#pragma once
#include "CoreMinimal.h"
#include "EnumMissionDifficulty.generated.h"

UENUM(BlueprintType)
enum class EnumMissionDifficulty : uint8 {
    NONE,
    EASY,
    MEDIUM,
    HARD,
    VERY_HARD,
    CUSTOM,
};

