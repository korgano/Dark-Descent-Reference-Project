#pragma once
#include "CoreMinimal.h"
#include "EAntiAliasingType.generated.h"

UENUM(BlueprintType)
enum class EAntiAliasingType : uint8 {
    None,
    FXAA,
    TemporalAAFast,
    TemporalAA,
};

