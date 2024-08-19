#pragma once
#include "CoreMinimal.h"
#include "TryEndSkillReason.generated.h"

UENUM(BlueprintType)
enum class TryEndSkillReason : uint8 {
    STOP,
    DAMAGE,
    IMMOBILIZATION,
};

