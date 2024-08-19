#pragma once
#include "CoreMinimal.h"
#include "ETutorialState.generated.h"

UENUM(BlueprintType)
enum class ETutorialState : uint8 {
    INACTIVE,
    OPENING,
    ACTIVE,
    CLOSING,
};

