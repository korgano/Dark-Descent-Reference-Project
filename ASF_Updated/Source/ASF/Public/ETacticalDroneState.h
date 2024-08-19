#pragma once
#include "CoreMinimal.h"
#include "ETacticalDroneState.generated.h"

UENUM(BlueprintType)
enum class ETacticalDroneState : uint8 {
    Follow,
    ReturnToOwner,
    SquadDrone,
};

