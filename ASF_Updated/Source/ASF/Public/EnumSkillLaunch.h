#pragma once
#include "CoreMinimal.h"
#include "EnumSkillLaunch.generated.h"

UENUM(BlueprintType)
enum class EnumSkillLaunch : uint8 {
    NO_SKILL,
    LOCKED,
    DEAD,
    INJURED,
    BREAKDOWN,
    NO_RESSOURCE,
    BUSY,
    AVAILABLE,
};

