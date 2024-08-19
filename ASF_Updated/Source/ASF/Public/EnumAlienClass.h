#pragma once
#include "CoreMinimal.h"
#include "EnumAlienClass.generated.h"

UENUM(BlueprintType)
enum class EnumAlienClass : uint8 {
    DRONE,
    WARRIOR,
    RUNNER,
    CRUSHER,
    FACEHUGGER,
    QUEEN,
    PRAETORIAN,
};

