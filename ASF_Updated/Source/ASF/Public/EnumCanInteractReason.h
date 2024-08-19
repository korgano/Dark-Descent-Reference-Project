#pragma once
#include "CoreMinimal.h"
#include "EnumCanInteractReason.generated.h"

UENUM(BlueprintType)
enum class EnumCanInteractReason : uint8 {
    CAN,
    NO_RESSOURCES,
    BAD_DIPLOMACY,
    UNAVAILABLE,
    NO_ONE_CAN_DO_IT,
    NOT_REACHABLE,
    MARINE_CANT,
};

