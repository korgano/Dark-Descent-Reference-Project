#pragma once
#include "CoreMinimal.h"
#include "EMarineNameDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EMarineNameDisplayMode : uint8 {
    FULL_NAME,
    SHORT_NAME,
    NICKNAME,
};

