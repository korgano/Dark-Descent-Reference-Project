#pragma once
#include "CoreMinimal.h"
#include "EnumFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EnumFeedbackType : uint8 {
    OBJECTIVE,
    ROOM,
    MARINE,
};

