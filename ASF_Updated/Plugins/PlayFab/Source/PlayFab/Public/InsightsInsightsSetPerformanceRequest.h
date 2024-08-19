#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "InsightsInsightsSetPerformanceRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FInsightsInsightsSetPerformanceRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerformanceLevel;
    
    FInsightsInsightsSetPerformanceRequest();
};

