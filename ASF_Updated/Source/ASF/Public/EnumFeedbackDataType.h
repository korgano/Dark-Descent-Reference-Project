#pragma once
#include "CoreMinimal.h"
#include "EnumFeedbackDataType.generated.h"

UENUM(BlueprintType)
enum class EnumFeedbackDataType : uint8 {
    STATIC,
    DYNAMIC,
    MOVING,
};

