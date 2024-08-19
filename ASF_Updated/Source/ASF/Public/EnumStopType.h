#pragma once
#include "CoreMinimal.h"
#include "EnumStopType.generated.h"

UENUM(BlueprintType)
enum class EnumStopType : uint8 {
    IN_MOVE,
    GOT_HIT,
};

