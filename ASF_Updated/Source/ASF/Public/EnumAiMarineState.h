#pragma once
#include "CoreMinimal.h"
#include "EnumAiMarineState.generated.h"

UENUM(BlueprintType)
enum class EnumAiMarineState : uint8 {
    CHILL,
    ALERT,
    FIGHT,
    NONE,
    SCRIPTED,
};

