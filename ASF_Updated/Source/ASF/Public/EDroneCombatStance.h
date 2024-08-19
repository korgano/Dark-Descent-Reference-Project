#pragma once
#include "CoreMinimal.h"
#include "EDroneCombatStance.generated.h"

UENUM(BlueprintType)
enum class EDroneCombatStance : uint8 {
    Passive,
    Defensive,
    Offensive,
};

