#pragma once
#include "CoreMinimal.h"
#include "EnumMarineLocomotionOwner.generated.h"

UENUM(BlueprintType)
enum class EnumMarineLocomotionOwner : uint8 {
    INGAME,
    LOADINGSCREEN_CINE,
    REMOVE_FROM_PLAY,
    ON_POWER_LOADER,
    ENTER_APC,
    LEAVE_APC,
};

