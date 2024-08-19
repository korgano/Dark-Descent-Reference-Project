#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyReportItemReviewResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyReportItemReviewResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyReportItemReviewResponse();
};

