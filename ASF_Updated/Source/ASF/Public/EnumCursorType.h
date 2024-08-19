#pragma once
#include "CoreMinimal.h"
#include "EnumCursorType.generated.h"

UENUM(BlueprintType)
enum class EnumCursorType : uint8 {
    ESCAPE_GUI,
    SKILL,
    HOVER_MARINE,
    HOVER_INTERACTION,
    GUI,
    MOVEMENT,
};

