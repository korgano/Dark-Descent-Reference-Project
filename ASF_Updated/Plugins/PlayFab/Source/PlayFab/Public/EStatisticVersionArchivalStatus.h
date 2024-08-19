#pragma once
#include "CoreMinimal.h"
#include "EStatisticVersionArchivalStatus.generated.h"

UENUM(BlueprintType)
enum class EStatisticVersionArchivalStatus : uint8 {
    pfenum_NotScheduled,
    pfenum_Scheduled,
    pfenum_Queued,
    pfenum_InProgress,
    pfenum_Complete,
};

