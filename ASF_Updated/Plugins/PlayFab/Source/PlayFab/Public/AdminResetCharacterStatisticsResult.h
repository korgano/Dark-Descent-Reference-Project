#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminResetCharacterStatisticsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminResetCharacterStatisticsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminResetCharacterStatisticsResult();
};

