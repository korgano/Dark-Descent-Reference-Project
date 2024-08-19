#pragma once
#include "CoreMinimal.h"
#include "EBMMarineStateType.generated.h"

UENUM(BlueprintType)
enum class EBMMarineStateType : uint8 {
    NEGATIVE,
    NEUTRAL,
    POSITIVE,
};

