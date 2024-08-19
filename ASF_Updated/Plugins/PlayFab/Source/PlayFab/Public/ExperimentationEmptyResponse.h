#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ExperimentationEmptyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationEmptyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FExperimentationEmptyResponse();
};

