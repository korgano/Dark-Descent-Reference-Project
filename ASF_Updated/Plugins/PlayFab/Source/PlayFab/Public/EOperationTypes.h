#pragma once
#include "CoreMinimal.h"
#include "EOperationTypes.generated.h"

UENUM(BlueprintType)
enum class EOperationTypes : uint8 {
    pfenum_Created,
    pfenum_Updated,
    pfenum_Deleted,
    pfenum_None,
};

