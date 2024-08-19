#pragma once
#include "CoreMinimal.h"
#include "EFSRMode.generated.h"

UENUM(BlueprintType)
enum class EFSRMode : uint8 {
    Disable,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
};

