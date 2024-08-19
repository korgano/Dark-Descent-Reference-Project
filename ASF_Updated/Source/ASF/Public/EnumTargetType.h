#pragma once
#include "CoreMinimal.h"
#include "EnumTargetType.generated.h"

UENUM(BlueprintType)
enum class EnumTargetType : uint8 {
    DOOR,
    CORRIDOR,
    UNDIFINED,
};

