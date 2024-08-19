#pragma once
#include "CoreMinimal.h"
#include "EnumSide.generated.h"

UENUM(BlueprintType)
enum class EnumSide : uint8 {
    TOP,
    BOTTOM,
    LEFT,
    RIGHT,
    FRONT,
    BACK,
};

