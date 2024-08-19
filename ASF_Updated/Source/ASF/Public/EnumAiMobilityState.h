#pragma once
#include "CoreMinimal.h"
#include "EnumAiMobilityState.generated.h"

UENUM(BlueprintType)
enum class EnumAiMobilityState : uint8 {
    STATIC,
    MOVEABLE,
};

