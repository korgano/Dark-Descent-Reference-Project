#pragma once
#include "CoreMinimal.h"
#include "EIdentifiedDeviceType.generated.h"

UENUM(BlueprintType)
enum class EIdentifiedDeviceType : uint8 {
    pfenum_Unknown,
    pfenum_XboxOne,
    pfenum_Scarlett,
};

