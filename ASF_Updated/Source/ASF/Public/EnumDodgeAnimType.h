#pragma once
#include "CoreMinimal.h"
#include "EnumDodgeAnimType.generated.h"

UENUM(BlueprintType)
enum class EnumDodgeAnimType : uint8 {
    IN_MOVE,
    AVOID_THREAT,
};

