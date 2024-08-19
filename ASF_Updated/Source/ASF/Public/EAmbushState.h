#pragma once
#include "CoreMinimal.h"
#include "EAmbushState.generated.h"

UENUM(BlueprintType)
enum class EAmbushState : uint8 {
    NONE,
    EMPTY,
    FILLED,
    ABOUT_TO_SPAWN,
    SCRIPTED_FILLED,
};

