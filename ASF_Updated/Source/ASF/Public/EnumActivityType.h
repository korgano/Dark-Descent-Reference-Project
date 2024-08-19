#pragma once
#include "CoreMinimal.h"
#include "EnumActivityType.generated.h"

UENUM(BlueprintType)
enum class EnumActivityType : uint8 {
    INTERRUPTION,
    INTERACTION,
    SKILL,
    SWAP_WEAPON,
    RELOAD,
    FIRING,
    COMMAND_OVERWATCH,
    IDLE_BLEEP_TRACKING,
    IDLE,
    SWAP_ITEM,
    BREAKDOWN,
    SHOCK,
    STRUGGLE,
    HURRY_UP,
};

