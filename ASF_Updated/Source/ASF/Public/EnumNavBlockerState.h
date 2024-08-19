#pragma once
#include "CoreMinimal.h"
#include "EnumNavBlockerState.generated.h"

UENUM(BlueprintType)
enum class EnumNavBlockerState : uint8 {
    ADDED,
    REMOVED,
    NONE,
};

