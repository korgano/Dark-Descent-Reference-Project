#pragma once
#include "CoreMinimal.h"
#include "EnumBaseManagementMode.generated.h"

UENUM(BlueprintType)
enum class EnumBaseManagementMode : uint8 {
    IDLES,
    SQUAD_SELECTION,
    CAPTURE_STUDIO,
    BACK_FROM_MISSION,
};

