#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminIncrementPlayerStatisticVersionResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminIncrementPlayerStatisticVersionResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* StatisticVersion;
    
    FAdminIncrementPlayerStatisticVersionResult();
};

