#pragma once
#include "CoreMinimal.h"
#include "EnumDestroyReason.generated.h"

UENUM(BlueprintType)
enum class EnumDestroyReason : uint8 {
    DEATH,
    DESTROYED,
    SECUREDINAPC,
    EXTRACTED,
    ABDUCTED,
};

