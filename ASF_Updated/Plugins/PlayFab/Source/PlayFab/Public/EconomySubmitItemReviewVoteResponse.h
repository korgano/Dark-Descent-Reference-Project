#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomySubmitItemReviewVoteResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomySubmitItemReviewVoteResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomySubmitItemReviewVoteResponse();
};

