#pragma once
#include "CoreMinimal.h"
#include "EnumPOIFilterWeightCurveType.generated.h"

UENUM(BlueprintType)
enum class EnumPOIFilterWeightCurveType : uint8 {
    NONE,
    BASE,
    ADD,
    SUB,
    MUL,
    DIV,
    PRIORITY,
    ENUM_MAX UMETA(Hidden),
};

