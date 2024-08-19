#pragma once
#include "CoreMinimal.h"
#include "EnumPOIComputationPolicy.generated.h"

UENUM(BlueprintType)
enum class EnumPOIComputationPolicy : uint8 {
    IGNOR_REQUESTER,
    IGNOR_REQUESTED,
    BOTH,
};

