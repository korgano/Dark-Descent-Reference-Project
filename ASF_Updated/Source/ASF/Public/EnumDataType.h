#pragma once
#include "CoreMinimal.h"
#include "EnumDataType.generated.h"

UENUM(BlueprintType)
enum class EnumDataType : uint8 {
    CONSTANT,
    DYNAMIC,
};

