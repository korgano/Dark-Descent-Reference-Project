#pragma once
#include "CoreMinimal.h"
#include "EGameBuildStatus.generated.h"

UENUM(BlueprintType)
enum class EGameBuildStatus : uint8 {
    pfenum_Available,
    pfenum_Validating,
    pfenum_InvalidBuildPackage,
    pfenum_Processing,
    pfenum_FailedToProcess,
};

