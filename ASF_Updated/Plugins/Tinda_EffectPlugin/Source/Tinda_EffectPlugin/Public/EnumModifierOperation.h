#pragma once
#include "CoreMinimal.h"
#include "EnumModifierOperation.generated.h"

UENUM(BlueprintType)
enum class EnumModifierOperation : uint8 {
    ADD,
    MUL,
    SET,
    SET_BASEVALUE,
};

