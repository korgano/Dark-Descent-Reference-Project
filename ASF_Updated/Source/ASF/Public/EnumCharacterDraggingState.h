#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterDraggingState.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterDraggingState : uint8 {
    NONE,
    CARRIER,
    CARRIED,
};

