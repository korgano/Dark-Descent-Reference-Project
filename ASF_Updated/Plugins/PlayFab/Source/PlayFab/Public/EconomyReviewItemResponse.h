#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyReviewItemResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyReviewItemResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyReviewItemResponse();
};

