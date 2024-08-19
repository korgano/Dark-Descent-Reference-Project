#pragma once
#include "CoreMinimal.h"
#include "EExperimentType.generated.h"

UENUM(BlueprintType)
enum class EExperimentType : uint8 {
    pfenum_Active,
    pfenum_Snapshot,
};

