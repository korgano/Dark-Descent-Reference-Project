#pragma once
#include "CoreMinimal.h"
#include "ETitleActivationStatus.generated.h"

UENUM(BlueprintType)
enum class ETitleActivationStatus : uint8 {
    pfenum_None,
    pfenum_ActivatedTitleKey,
    pfenum_PendingSteam,
    pfenum_ActivatedSteam,
    pfenum_RevokedSteam,
};

