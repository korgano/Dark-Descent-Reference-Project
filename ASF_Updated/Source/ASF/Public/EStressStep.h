#pragma once
#include "CoreMinimal.h"
#include "EStressStep.generated.h"

UENUM(BlueprintType)
enum class EStressStep : uint8 {
    Cool,
    Anxious,
    Panicked,
    Terrified,
    Count,
};

