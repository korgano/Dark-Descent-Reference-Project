#pragma once
#include "CoreMinimal.h"
#include "EnumActionReadyStatus.generated.h"

UENUM(BlueprintType)
enum class EnumActionReadyStatus : uint8 {
    UPDATE,
    FORCE_READY,
    FORCE_NOTREADY,
};

