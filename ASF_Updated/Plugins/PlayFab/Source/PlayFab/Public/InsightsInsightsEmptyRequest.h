#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "InsightsInsightsEmptyRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FInsightsInsightsEmptyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    FInsightsInsightsEmptyRequest();
};

