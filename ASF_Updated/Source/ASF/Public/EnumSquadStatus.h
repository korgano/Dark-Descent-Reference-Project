#pragma once
#include "CoreMinimal.h"
#include "EnumSquadStatus.generated.h"

UENUM(BlueprintType)
enum class EnumSquadStatus : uint8 {
    SPOTTED,
    TRACKED,
    COVERT,
    DEFENSE,
    TRANSITION,
    REST,
};

