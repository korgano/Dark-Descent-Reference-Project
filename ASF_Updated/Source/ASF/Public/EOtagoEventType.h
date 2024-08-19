#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventType.generated.h"

UENUM(BlueprintType)
enum class EOtagoEventType : uint8 {
    RANDOM,
    FAILSAFE,
};

