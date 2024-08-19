#pragma once
#include "CoreMinimal.h"
#include "EActivityQuickLaunch.generated.h"

UENUM(BlueprintType)
enum class EActivityQuickLaunch : uint8 {
    NoQuickLaunch,
    QuickNewGame,
    QuickLoad,
};

