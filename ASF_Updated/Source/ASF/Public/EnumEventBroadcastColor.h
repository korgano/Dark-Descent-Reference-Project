#pragma once
#include "CoreMinimal.h"
#include "EnumEventBroadcastColor.generated.h"

UENUM(BlueprintType)
enum class EnumEventBroadcastColor : uint8 {
    DEFAULT,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
};

