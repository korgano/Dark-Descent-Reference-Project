#pragma once
#include "CoreMinimal.h"
#include "EPfSourceType.generated.h"

UENUM(BlueprintType)
enum class EPfSourceType : uint8 {
    pfenum_Admin,
    pfenum_BackEnd,
    pfenum_GameClient,
    pfenum_GameServer,
    pfenum_Partner,
    pfenum_Custom,
    pfenum_API,
};

