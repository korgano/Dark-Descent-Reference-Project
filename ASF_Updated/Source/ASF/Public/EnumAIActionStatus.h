#pragma once
#include "CoreMinimal.h"
#include "EnumAIActionStatus.generated.h"

UENUM(BlueprintType)
enum class EnumAIActionStatus : uint8 {
    SUCCESS,
    FAIL,
};

