#pragma once
#include "CoreMinimal.h"
#include "EnumActionStatus.generated.h"

UENUM(BlueprintType)
enum class EnumActionStatus : uint8 {
    CREATED,
    ON_GOING,
    PAUSE,
    SUCCESS,
    FAIL,
    CANCEL,
};

