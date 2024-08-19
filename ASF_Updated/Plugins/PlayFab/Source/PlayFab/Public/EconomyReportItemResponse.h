#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyReportItemResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyReportItemResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyReportItemResponse();
};

