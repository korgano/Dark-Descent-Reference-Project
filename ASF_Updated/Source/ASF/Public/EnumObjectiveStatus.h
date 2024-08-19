#pragma once
#include "CoreMinimal.h"
#include "EnumObjectiveStatus.generated.h"

UENUM(BlueprintType)
enum class EnumObjectiveStatus : uint8 {
    PENDING,
    ACTIVATED,
    FAILED,
    SUCCEED,
    INVALIDATED,
};

