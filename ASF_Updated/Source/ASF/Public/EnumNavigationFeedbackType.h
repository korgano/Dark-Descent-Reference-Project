#pragma once
#include "CoreMinimal.h"
#include "EnumNavigationFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EnumNavigationFeedbackType : uint8 {
    OBJECTIVE,
    ROOM,
    MARINE,
    DRONE,
    WY_GUNSHIP,
    APC,
};

