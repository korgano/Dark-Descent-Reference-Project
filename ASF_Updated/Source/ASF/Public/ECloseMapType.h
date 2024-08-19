#pragma once
#include "CoreMinimal.h"
#include "ECloseMapType.generated.h"

UENUM(BlueprintType)
enum class ECloseMapType : uint8 {
    ONCLOSE,
    ONPRECLOSE,
};

