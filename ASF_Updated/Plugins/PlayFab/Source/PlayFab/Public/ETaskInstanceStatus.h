#pragma once
#include "CoreMinimal.h"
#include "ETaskInstanceStatus.generated.h"

UENUM(BlueprintType)
enum class ETaskInstanceStatus : uint8 {
    pfenum_Succeeded,
    pfenum_Starting,
    pfenum_InProgress,
    pfenum_Failed,
    pfenum_Aborted,
    pfenum_Stalled,
};

