#pragma once
#include "CoreMinimal.h"
#include "EInputType.generated.h"

UENUM(BlueprintType)
enum class EInputType : uint8 {
    HOLD,
    SINGLE,
    DOUBLE,
    UNDEFINED,
};

