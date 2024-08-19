#pragma once
#include "CoreMinimal.h"
#include "EStatisticResetIntervalOption.generated.h"

UENUM(BlueprintType)
enum class EStatisticResetIntervalOption : uint8 {
    pfenum_Never,
    pfenum_Hour,
    pfenum_Day,
    pfenum_Week,
    pfenum_Month,
};

