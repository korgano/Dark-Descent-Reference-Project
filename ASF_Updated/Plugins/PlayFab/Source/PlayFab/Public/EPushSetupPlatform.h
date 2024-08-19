#pragma once
#include "CoreMinimal.h"
#include "EPushSetupPlatform.generated.h"

UENUM(BlueprintType)
enum class EPushSetupPlatform : uint8 {
    pfenum_GCM,
    pfenum_APNS,
    pfenum_APNS_SANDBOX,
};

