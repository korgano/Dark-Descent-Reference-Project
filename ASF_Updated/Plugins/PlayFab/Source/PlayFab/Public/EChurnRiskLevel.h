#pragma once
#include "CoreMinimal.h"
#include "EChurnRiskLevel.generated.h"

UENUM(BlueprintType)
enum class EChurnRiskLevel : uint8 {
    pfenum_NoData,
    pfenum_LowRisk,
    pfenum_MediumRisk,
    pfenum_HighRisk,
};

