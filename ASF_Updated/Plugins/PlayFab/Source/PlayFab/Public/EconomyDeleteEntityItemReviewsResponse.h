#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyDeleteEntityItemReviewsResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyDeleteEntityItemReviewsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyDeleteEntityItemReviewsResponse();
};

