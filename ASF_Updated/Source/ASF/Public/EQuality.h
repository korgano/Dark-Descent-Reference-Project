#pragma once
#include "CoreMinimal.h"
#include "EQuality.generated.h"

UENUM(BlueprintType)
enum class EQuality : uint8 {
    Low,
    Medium,
    High,
    Epic,
};

