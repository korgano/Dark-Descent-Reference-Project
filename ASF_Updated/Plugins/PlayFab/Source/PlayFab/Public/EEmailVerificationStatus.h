#pragma once
#include "CoreMinimal.h"
#include "EEmailVerificationStatus.generated.h"

UENUM(BlueprintType)
enum class EEmailVerificationStatus : uint8 {
    pfenum_Unverified,
    pfenum_Pending,
    pfenum_Confirmed,
};

