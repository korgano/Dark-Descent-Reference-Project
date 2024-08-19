#pragma once
#include "CoreMinimal.h"
#include "EGameInstanceState.generated.h"

UENUM(BlueprintType)
enum class EGameInstanceState : uint8 {
    pfenum_Open,
    pfenum_Closed,
};

