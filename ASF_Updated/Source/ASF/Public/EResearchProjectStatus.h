#pragma once
#include "CoreMinimal.h"
#include "EResearchProjectStatus.generated.h"

UENUM(BlueprintType)
enum class EResearchProjectStatus : uint8 {
    LOCKED,
    UNAVAILABLE,
    AVAILABLE,
    ONGOING,
    COMPLETE,
};

