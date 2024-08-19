#pragma once
#include "CoreMinimal.h"
#include "EnumLDActorCrossableType.generated.h"

UENUM(BlueprintType)
enum class EnumLDActorCrossableType : uint8 {
    CROSSABLE_JUMP_SMALL,
    CROSSABLE_JUMP_MEDIUM,
    CROSSABLE_JUMP_LARGE,
    CROSSABLE_JUMP_HUGE,
};

