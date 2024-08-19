#pragma once
#include "CoreMinimal.h"
#include "EMovementOrderFrom.generated.h"

UENUM(BlueprintType)
enum class EMovementOrderFrom : uint8 {
    ORDEREDBYGAMELOGIC,
    ORDEREDBYPLAYER,
    ORDEREDBYPLAYERFORREDEPLOYSQUAD,
};

