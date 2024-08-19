#pragma once
#include "CoreMinimal.h"
#include "EnumObjectiveFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EnumObjectiveFeedbackType : uint8 {
    PERIMETER,
    POINT,
    NONE,
    CIRCLE,
};

