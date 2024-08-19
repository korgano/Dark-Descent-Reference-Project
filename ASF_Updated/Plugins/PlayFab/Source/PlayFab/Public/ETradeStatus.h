#pragma once
#include "CoreMinimal.h"
#include "ETradeStatus.generated.h"

UENUM(BlueprintType)
enum class ETradeStatus : uint8 {
    pfenum_Invalid,
    pfenum_Opening,
    pfenum_Open,
    pfenum_Accepting,
    pfenum_Accepted,
    pfenum_Filled,
    pfenum_Cancelled,
};

