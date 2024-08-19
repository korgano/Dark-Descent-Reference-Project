#pragma once
#include "CoreMinimal.h"
#include "ENewGameModeUnlockState.generated.h"

UENUM(BlueprintType)
enum class ENewGameModeUnlockState : uint8 {
    Locked,
    Unlocked,
    UnlockedAndSeen,
};

