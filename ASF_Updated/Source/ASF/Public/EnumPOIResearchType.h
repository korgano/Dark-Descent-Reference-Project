#pragma once
#include "CoreMinimal.h"
#include "EnumPOIResearchType.generated.h"

UENUM(BlueprintType)
enum class EnumPOIResearchType : uint8 {
    SingleResult,
    RandomBest5Pct,
    RandomBest25Pct,
    AllMatching,
    FirstMatch,
};

