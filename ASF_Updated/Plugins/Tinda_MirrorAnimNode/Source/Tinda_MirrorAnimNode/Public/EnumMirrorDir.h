#pragma once
#include "CoreMinimal.h"
#include "EnumMirrorDir.generated.h"

UENUM(BlueprintType)
enum class EnumMirrorDir : uint8 {
    None,
    X_Axis,
    Y_Axis,
    Z_Axis,
    XY_Axis,
    YZ_Axis,
    XZ_Axis,
    NegX_Axis,
    NegY_Axis,
    NegZ_Axis,
    NegXY_Axis,
    NegYZ_Axis,
    NegXZ_Axis,
};

