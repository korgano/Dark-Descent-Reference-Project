#pragma once
#include "CoreMinimal.h"
#include "EMatchmakeStatus.generated.h"

UENUM(BlueprintType)
enum class EMatchmakeStatus : uint8 {
    pfenum_Complete,
    pfenum_Waiting,
    pfenum_GameNotFound,
    pfenum_NoAvailableSlots,
    pfenum_SessionClosed,
};

