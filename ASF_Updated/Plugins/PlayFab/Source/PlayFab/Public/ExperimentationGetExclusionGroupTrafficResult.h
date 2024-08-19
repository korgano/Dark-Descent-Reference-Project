#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ExperimentationGetExclusionGroupTrafficResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationGetExclusionGroupTrafficResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> TrafficAllocations;
    
    FExperimentationGetExclusionGroupTrafficResult();
};

