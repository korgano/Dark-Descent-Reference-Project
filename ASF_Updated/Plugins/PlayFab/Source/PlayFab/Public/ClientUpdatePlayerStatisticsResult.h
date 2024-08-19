#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUpdatePlayerStatisticsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUpdatePlayerStatisticsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUpdatePlayerStatisticsResult();
};

