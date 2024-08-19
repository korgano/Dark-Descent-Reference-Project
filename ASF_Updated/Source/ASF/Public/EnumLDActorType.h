#pragma once
#include "CoreMinimal.h"
#include "EnumLDActorType.generated.h"

UENUM(BlueprintType)
enum class EnumLDActorType : uint8 {
    WALL,
    FLOOR,
    ROOF,
    PROPS,
    COSMETIC,
    WALL_FOW,
};

