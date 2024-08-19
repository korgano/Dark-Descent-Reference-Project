#pragma once
#include "CoreMinimal.h"
#include "EPfTriggerType.generated.h"

UENUM(BlueprintType)
enum class EPfTriggerType : uint8 {
    pfenum_HTTP,
    pfenum_Queue,
};

