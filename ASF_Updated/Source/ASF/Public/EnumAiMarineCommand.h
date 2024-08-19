#pragma once
#include "CoreMinimal.h"
#include "EnumAiMarineCommand.generated.h"

UENUM(BlueprintType)
enum class EnumAiMarineCommand : uint8 {
    NONE,
    PLAYERCOMMAND,
    FREE,
};

