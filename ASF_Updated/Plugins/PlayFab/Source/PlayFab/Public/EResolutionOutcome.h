#pragma once
#include "CoreMinimal.h"
#include "EResolutionOutcome.generated.h"

UENUM(BlueprintType)
enum class EResolutionOutcome : uint8 {
    pfenum_Revoke,
    pfenum_Reinstate,
    pfenum_Manual,
};

