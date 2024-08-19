#pragma once
#include "CoreMinimal.h"
#include "EnumPhaseChangeSubObjective.generated.h"

UENUM(BlueprintType)
enum class EnumPhaseChangeSubObjective : uint8 {
    ON_NEW_PHASE,
    ON_OLD_PHASE,
};

