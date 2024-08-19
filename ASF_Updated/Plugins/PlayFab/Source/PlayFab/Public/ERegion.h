#pragma once
#include "CoreMinimal.h"
#include "ERegion.generated.h"

UENUM(BlueprintType)
enum class ERegion : uint8 {
    pfenum_USCentral,
    pfenum_USEast,
    pfenum_EUWest,
    pfenum_Singapore,
    pfenum_Japan,
    pfenum_Brazil,
    pfenum_Australia,
};

