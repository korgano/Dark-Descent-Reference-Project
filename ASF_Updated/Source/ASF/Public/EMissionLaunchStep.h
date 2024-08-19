#pragma once
#include "CoreMinimal.h"
#include "EMissionLaunchStep.generated.h"

UENUM(BlueprintType)
enum class EMissionLaunchStep : uint8 {
    MISSION,
    DEPLOYMENT,
    SQUAD,
    INVENTORY,
    LAUNCH,
};

