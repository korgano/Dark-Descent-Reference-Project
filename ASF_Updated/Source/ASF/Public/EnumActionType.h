#pragma once
#include "CoreMinimal.h"
#include "EnumActionType.generated.h"

UENUM(BlueprintType)
enum class EnumActionType : uint8 {
    UNDEFINED,
    MOVE,
    INTERACT,
    BREAKDOWN,
    SKILL,
    IA,
    NARRATIVE_INTERACT,
};

