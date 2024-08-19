#pragma once
#include "CoreMinimal.h"
#include "EOnslaughtType.generated.h"

UENUM(BlueprintType)
enum class EOnslaughtType : uint8 {
    MASSIVE_ONSLAUGHT,
    INFINITE_ONSLAUGHT,
    QUEEN_INFINITE_ONSLAUGHT,
    SCRIPTED_DEFENSE,
};

