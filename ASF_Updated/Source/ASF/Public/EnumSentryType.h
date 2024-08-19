#pragma once
#include "CoreMinimal.h"
#include "EnumSentryType.generated.h"

UENUM(BlueprintType)
enum class EnumSentryType : uint8 {
    NORMAL,
    TRIPOD,
    HEAVY,
};

