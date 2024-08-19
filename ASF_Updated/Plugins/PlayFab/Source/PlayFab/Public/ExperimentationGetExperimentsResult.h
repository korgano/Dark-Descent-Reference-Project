#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ExperimentationGetExperimentsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationGetExperimentsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Experiments;
    
    FExperimentationGetExperimentsResult();
};

