#pragma once
#include "CoreMinimal.h"
#include "EGamepadBindingType.generated.h"

UENUM(BlueprintType)
enum class EGamepadBindingType : uint8 {
    RESPECT_INPUT_A_SELECTION,
    SKILL_CUSTOM_INPUT_SELECTION,
};

