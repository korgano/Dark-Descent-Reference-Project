#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterBreakdownType.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterBreakdownType : uint8 {
    NONE,
    CATATONIC,
    DESERTER,
    BERSERKER,
    PARANOID,
    FASCINATION_ADORE,
    FASCINATION_MOVE,
    SHOCK,
};

