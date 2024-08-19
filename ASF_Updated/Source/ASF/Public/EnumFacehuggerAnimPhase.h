#pragma once
#include "CoreMinimal.h"
#include "EnumFacehuggerAnimPhase.generated.h"

UENUM(BlueprintType)
enum class EnumFacehuggerAnimPhase : uint8 {
    HUNTING,
    IMPLANTING,
    DEAD,
};

