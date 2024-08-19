#pragma once
#include "CoreMinimal.h"
#include "EStepSide.generated.h"

UENUM(BlueprintType)
enum class EStepSide : uint8 {
    RIGHT,
    LEFT,
    FRONT_RIGHT,
    FRONT_LEFT,
};

