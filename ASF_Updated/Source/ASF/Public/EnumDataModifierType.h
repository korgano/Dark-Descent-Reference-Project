#pragma once
#include "CoreMinimal.h"
#include "EnumDataModifierType.generated.h"

UENUM(BlueprintType)
enum class EnumDataModifierType : uint8 {
    ADD,
    MUL,
    SUB,
    DIV,
};

