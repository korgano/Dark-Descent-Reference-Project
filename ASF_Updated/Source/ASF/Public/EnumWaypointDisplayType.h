#pragma once
#include "CoreMinimal.h"
#include "EnumWaypointDisplayType.generated.h"

UENUM(BlueprintType)
enum class EnumWaypointDisplayType : uint8 {
    DEFAULT,
    PATHFIND,
};

