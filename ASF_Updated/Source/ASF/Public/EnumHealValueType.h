#pragma once
#include "CoreMinimal.h"
#include "EnumHealValueType.generated.h"

UENUM(BlueprintType)
enum class EnumHealValueType : uint8 {
    HEALMAXLIFEBYPERCENTAGE,
    HEALCURRENTVALUEBYVALUE,
};

