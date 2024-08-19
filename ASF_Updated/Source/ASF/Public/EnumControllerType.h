#pragma once
#include "CoreMinimal.h"
#include "EnumControllerType.generated.h"

UENUM(BlueprintType)
enum class EnumControllerType : uint8 {
    GAMEPAD,
    KEYBOARD,
};

