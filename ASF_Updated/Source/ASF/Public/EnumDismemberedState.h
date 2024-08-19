#pragma once
#include "CoreMinimal.h"
#include "EnumDismemberedState.generated.h"

UENUM(BlueprintType)
enum class EnumDismemberedState : uint8 {
    NONE,
    LEFT_ARM_CUT,
    RIGHT_ARM_CUT,
    LEFT_LEG_CUT,
    RIGHT_LEG_CUT,
};

