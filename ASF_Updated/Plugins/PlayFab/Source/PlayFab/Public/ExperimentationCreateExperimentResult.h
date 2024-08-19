#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ExperimentationCreateExperimentResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationCreateExperimentResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExperimentId;
    
    FExperimentationCreateExperimentResult();
};

