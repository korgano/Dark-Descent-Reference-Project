#pragma once
#include "CoreMinimal.h"
#include "EnumCharacterRagdollType.generated.h"

UENUM(BlueprintType)
enum class EnumCharacterRagdollType : uint8 {
    FREE,
    FREE_BLENDED,
    UNCONSCIOUS,
    DEAD,
    ABDUCTED,
    FALLING,
    FALL_AND_GETUP,
    TAKE_DAMAGE,
    CONSTRAINT_PROJECTION,
};

