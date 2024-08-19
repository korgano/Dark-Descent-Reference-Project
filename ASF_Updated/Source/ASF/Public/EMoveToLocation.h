#pragma once
#include "CoreMinimal.h"
#include "EMoveToLocation.generated.h"

UENUM(BlueprintType)
enum class EMoveToLocation : uint8 {
    TOACTOR,
    TOGAMEPLAYACTOR,
    TOOVERRIDELOCATION,
};

