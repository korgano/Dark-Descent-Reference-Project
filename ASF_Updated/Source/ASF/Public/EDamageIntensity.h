#pragma once
#include "CoreMinimal.h"
#include "EDamageIntensity.generated.h"

UENUM(BlueprintType)
enum class EDamageIntensity : uint8 {
    LOW,
    MEDIUM,
    HIGH,
};

