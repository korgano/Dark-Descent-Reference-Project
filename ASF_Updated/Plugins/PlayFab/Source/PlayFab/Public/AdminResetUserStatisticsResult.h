#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminResetUserStatisticsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminResetUserStatisticsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminResetUserStatisticsResult();
};

