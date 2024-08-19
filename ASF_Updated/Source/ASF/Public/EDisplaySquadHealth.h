#pragma once
#include "CoreMinimal.h"
#include "EDisplaySquadHealth.generated.h"

UENUM(BlueprintType)
enum class EDisplaySquadHealth : uint8 {
    Always,
    SkillBarOnly,
    MissingLife,
    Never,
};

