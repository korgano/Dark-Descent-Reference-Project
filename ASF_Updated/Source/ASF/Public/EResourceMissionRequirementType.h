#pragma once
#include "CoreMinimal.h"
#include "EResourceMissionRequirementType.generated.h"

UENUM(BlueprintType)
enum class EResourceMissionRequirementType : uint8 {
    MARINE_COUNT,
    MARINE_LEVEL,
    MARINE_CLASS,
    RESOURCE_COUNT,
    RESOURCE_TYPE,
};

