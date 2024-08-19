#pragma once
#include "CoreMinimal.h"
#include "EnumFlankingStatus.generated.h"

UENUM(BlueprintType)
enum class EnumFlankingStatus : uint8 {
    FLANKED,
    PARTIALLY_FLANKED,
    NOT_FLANKED,
    NONE,
};

