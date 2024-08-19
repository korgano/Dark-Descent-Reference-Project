#pragma once
#include "CoreMinimal.h"
#include "EModerationStatus.generated.h"

UENUM(BlueprintType)
enum class EModerationStatus : uint8 {
    pfenum_Unknown,
    pfenum_AwaitingModeration,
    pfenum_Approved,
    pfenum_Rejected,
};

