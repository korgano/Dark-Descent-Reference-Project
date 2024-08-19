#pragma once
#include "CoreMinimal.h"
#include "EnumMissionState.generated.h"

UENUM(BlueprintType)
enum class EnumMissionState : uint8 {
    PAUSED,
    RUNNING,
    ENDED,
};

