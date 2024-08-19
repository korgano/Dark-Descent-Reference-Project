#pragma once
#include "CoreMinimal.h"
#include "EEndActivityStatus.generated.h"

UENUM(BlueprintType)
enum class EEndActivityStatus : uint8 {
    Paused,
    Completed,
};

