#pragma once
#include "CoreMinimal.h"
#include "EnumHumanoidState.generated.h"

UENUM(BlueprintType)
enum class EnumHumanoidState : uint8 {
    INDIVIDUAL,
    SQUAD,
    DONOTHING,
    IDLE,
};

