#pragma once
#include "CoreMinimal.h"
#include "EDebugForceControllerType.generated.h"

UENUM(BlueprintType)
enum class EDebugForceControllerType : uint8 {
    NONE,
    KEYBOARD,
    XBOX,
    PLAYSTATION,
};

