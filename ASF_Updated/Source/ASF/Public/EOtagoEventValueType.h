#pragma once
#include "CoreMinimal.h"
#include "EOtagoEventValueType.generated.h"

UENUM(BlueprintType)
enum class EOtagoEventValueType : uint8 {
    INTEGER,
    BOOL,
    TAG,
    NAME,
    NONE,
};

