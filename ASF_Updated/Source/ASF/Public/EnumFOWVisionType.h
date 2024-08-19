#pragma once
#include "CoreMinimal.h"
#include "EnumFOWVisionType.generated.h"

UENUM(BlueprintType)
enum class EnumFOWVisionType : uint8 {
    UNSEEN,
    SEEN,
    VISIBLE,
    PLAYER_VISIBLE,
};

