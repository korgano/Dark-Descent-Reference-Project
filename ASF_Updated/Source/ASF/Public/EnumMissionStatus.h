#pragma once
#include "CoreMinimal.h"
#include "EnumMissionStatus.generated.h"

UENUM(BlueprintType)
enum class EnumMissionStatus : uint8 {
    UNINITIALIZED,
    RUNNING,
    SUCCEEDED,
    FAILED,
};

