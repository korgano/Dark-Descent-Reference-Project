#pragma once
#include "CoreMinimal.h"
#include "EProtocolType.generated.h"

UENUM(BlueprintType)
enum class EProtocolType : uint8 {
    pfenum_TCP,
    pfenum_UDP,
};

