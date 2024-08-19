#pragma once
#include "CoreMinimal.h"
#include "EMembershipLock.generated.h"

UENUM(BlueprintType)
enum class EMembershipLock : uint8 {
    pfenum_Unlocked,
    pfenum_Locked,
};

