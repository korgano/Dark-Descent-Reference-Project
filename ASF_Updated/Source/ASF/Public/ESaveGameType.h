#pragma once
#include "CoreMinimal.h"
#include "ESaveGameType.generated.h"

UENUM(BlueprintType)
enum class ESaveGameType : uint8 {
    MANUAL,
    MISSION_GA,
    OTAGO_NEWTURN,
    OTAGO_BEFORE_MISSION,
    OTAGO_AFTER_MISSION,
    MISSION_REST,
    MISSION_TRANSITION,
};

