#pragma once
#include "CoreMinimal.h"
#include "EnumAlienBreachDoorPhase.generated.h"

UENUM(BlueprintType)
enum class EnumAlienBreachDoorPhase : uint8 {
    NONE,
    BREACHING,
    FINISH_SUCESS,
    FINISH_FAIL,
};

