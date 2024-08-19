#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "InsightsInsightsSetStorageRetentionRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FInsightsInsightsSetStorageRetentionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetentionDays;
    
    FInsightsInsightsSetStorageRetentionRequest();
};

