#pragma once
#include "CoreMinimal.h"
#include "EnumAlienGrabStep.generated.h"

UENUM(BlueprintType)
enum class EnumAlienGrabStep : uint8 {
    NONE,
    GRAB,
    GRAB_KILL,
};

