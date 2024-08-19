#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUpdatePlayerStatisticsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUpdatePlayerStatisticsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerUpdatePlayerStatisticsResult();
};

