#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterCarriedItem.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterCarriedItem : uint8 {
    HANDGUN,
    RIFFLE,
    SMARTGUN,
    SHOTGUN,
    PLASMAGUN,
    ITEM,
    NONE,
    NOT_SET,
    RPG,
};

