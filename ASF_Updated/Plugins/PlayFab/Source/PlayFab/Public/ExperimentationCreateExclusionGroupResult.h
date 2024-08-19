#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ExperimentationCreateExclusionGroupResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationCreateExclusionGroupResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExclusionGroupId;
    
    FExperimentationCreateExclusionGroupResult();
};

