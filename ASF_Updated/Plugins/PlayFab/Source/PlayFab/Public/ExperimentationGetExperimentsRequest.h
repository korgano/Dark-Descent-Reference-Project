#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ExperimentationGetExperimentsRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationGetExperimentsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    FExperimentationGetExperimentsRequest();
};

