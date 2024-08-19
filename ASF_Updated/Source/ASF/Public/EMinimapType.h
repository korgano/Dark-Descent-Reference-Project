#pragma once
#include "CoreMinimal.h"
#include "EMinimapType.generated.h"

UENUM(BlueprintType)
enum class EMinimapType : uint8 {
    DEFAULT,
    APC_DESTINATION,
    CHARMAP_TABLE,
    CAMERAS,
};

