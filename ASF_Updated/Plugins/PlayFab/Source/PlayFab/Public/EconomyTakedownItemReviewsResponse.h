#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyTakedownItemReviewsResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyTakedownItemReviewsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyTakedownItemReviewsResponse();
};

