#pragma once
#include "CoreMinimal.h"
#include "ETooltipActionState.generated.h"

UENUM(BlueprintType)
enum class ETooltipActionState : uint8 {
    ENABLED,
    DISABLED,
    COMPLETE,
};

