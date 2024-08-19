#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ExperimentationGetLatestScorecardResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationGetLatestScorecardResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Scorecard;
    
    FExperimentationGetLatestScorecardResult();
};

