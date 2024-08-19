#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterWearingFacehuggerState.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterWearingFacehuggerState : uint8 {
    NONE,
    STRUGGLING,
    AGONISING,
};

