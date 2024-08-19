#pragma once
#include "CoreMinimal.h"
#include "EnumCocoonState.generated.h"

UENUM(BlueprintType)
enum class EnumCocoonState : uint8 {
    NONE,
    COCOONED,
    FALLING,
};

