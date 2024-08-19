#pragma once
#include "CoreMinimal.h"
#include "EnumAIActionType.generated.h"

UENUM(BlueprintType)
enum class EnumAIActionType : uint8 {
    STRAIGHT,
    DEFERRED,
};

