#pragma once
#include "CoreMinimal.h"
#include "EAPCMovementTriggerType.generated.h"

UENUM(BlueprintType)
enum class EAPCMovementTriggerType : uint8 {
    APC_LEFT,
    APC_ARRIVED,
};

