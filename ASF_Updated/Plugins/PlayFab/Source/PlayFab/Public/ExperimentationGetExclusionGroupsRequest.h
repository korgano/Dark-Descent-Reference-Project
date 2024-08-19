#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ExperimentationGetExclusionGroupsRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FExperimentationGetExclusionGroupsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    FExperimentationGetExclusionGroupsRequest();
};

