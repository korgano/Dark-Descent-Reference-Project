#pragma once
#include "CoreMinimal.h"
#include "EMaxFPS.generated.h"

UENUM(BlueprintType)
enum class EMaxFPS : uint8 {
    Unlimited,
    FPS60,
    FPS120,
    FPS144,
};

