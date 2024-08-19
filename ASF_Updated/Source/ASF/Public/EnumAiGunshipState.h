#pragma once
#include "CoreMinimal.h"
#include "EnumAiGunshipState.generated.h"

UENUM(BlueprintType)
enum class EnumAiGunshipState : uint8 {
    NONE,
    SCRIPTED,
    ROAMING,
    TRANSITION,
    FIGHT,
};

