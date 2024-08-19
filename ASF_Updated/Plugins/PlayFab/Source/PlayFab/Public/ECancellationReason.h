#pragma once
#include "CoreMinimal.h"
#include "ECancellationReason.generated.h"

UENUM(BlueprintType)
enum class ECancellationReason : uint8 {
    pfenum_Requested,
    pfenum_Internal,
    pfenum_Timeout,
};

