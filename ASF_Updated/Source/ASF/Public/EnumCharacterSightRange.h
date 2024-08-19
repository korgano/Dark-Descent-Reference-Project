#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterSightRange.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterSightRange : uint8 {
    LONG,
    CLOSE,
    STASIS,
    LONG_AROUND,
    EVADE,
    CUSTOM,
};

