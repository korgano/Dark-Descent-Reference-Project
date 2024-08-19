#pragma once
#include "CoreMinimal.h"
#include "ETutorialWidgetSlot.generated.h"

UENUM(BlueprintType)
enum class ETutorialWidgetSlot : uint8 {
    NONE,
    TOP_LEFT,
    TOP_CENTER,
    TOP_RIGHT,
    MIDDLE_LEFT,
    MIDDLE_CENTER,
    MIDDLE_RIGHT,
    BOTTOM_LEFT,
    BOTTOM_CENTER,
    BOTTOM_RIGHT,
};

