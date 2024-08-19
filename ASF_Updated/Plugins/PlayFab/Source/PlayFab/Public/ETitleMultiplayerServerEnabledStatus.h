#pragma once
#include "CoreMinimal.h"
#include "ETitleMultiplayerServerEnabledStatus.generated.h"

UENUM(BlueprintType)
enum class ETitleMultiplayerServerEnabledStatus : uint8 {
    pfenum_Initializing,
    pfenum_Enabled,
    pfenum_Disabled,
};

