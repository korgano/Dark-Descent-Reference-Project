#pragma once
#include "CoreMinimal.h"
#include "ESkillSelectionStatus.generated.h"

UENUM(BlueprintType)
enum class ESkillSelectionStatus : uint8 {
    UNSELECTED,
    SELECTED,
    VALIDATING,
};

