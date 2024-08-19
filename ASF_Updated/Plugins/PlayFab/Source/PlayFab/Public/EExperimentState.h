#pragma once
#include "CoreMinimal.h"
#include "EExperimentState.generated.h"

UENUM(BlueprintType)
enum class EExperimentState : uint8 {
    pfenum_New,
    pfenum_Started,
    pfenum_Stopped,
    pfenum_Deleted,
};

