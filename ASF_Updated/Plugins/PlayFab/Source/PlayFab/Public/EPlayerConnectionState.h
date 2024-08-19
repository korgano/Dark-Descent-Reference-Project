#pragma once
#include "CoreMinimal.h"
#include "EPlayerConnectionState.generated.h"

UENUM(BlueprintType)
enum class EPlayerConnectionState : uint8 {
    pfenum_Unassigned,
    pfenum_Connecting,
    pfenum_Participating,
    pfenum_Participated,
};

