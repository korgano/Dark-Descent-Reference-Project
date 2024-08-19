#pragma once
#include "CoreMinimal.h"
#include "EPublishResult.generated.h"

UENUM(BlueprintType)
enum class EPublishResult : uint8 {
    pfenum_Unknown,
    pfenum_Pending,
    pfenum_Succeeded,
    pfenum_Failed,
    pfenum_Canceled,
};

