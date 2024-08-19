#pragma once
#include "CoreMinimal.h"
#include "EnumPolyAddedState.generated.h"

UENUM(BlueprintType)
enum class EnumPolyAddedState : uint8 {
    ADDED,
    ALREADY_VISITED,
    DIFFERENT_AREA,
};

