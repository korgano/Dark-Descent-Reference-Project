#pragma once
#include "CoreMinimal.h"
#include "EDialoguePlaybackMode.generated.h"

UENUM(BlueprintType)
enum class EDialoguePlaybackMode : uint8 {
    FULL,
    FIRST_LAST,
    SKIP,
};

