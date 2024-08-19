#pragma once
#include "CoreMinimal.h"
#include "EConcurentWidget.generated.h"

UENUM(BlueprintType)
enum class EConcurentWidget : uint8 {
    DEFAULT,
    Followers,
    Skills,
    Interactions,
    Marine_Interactions,
    MiniMap,
};

