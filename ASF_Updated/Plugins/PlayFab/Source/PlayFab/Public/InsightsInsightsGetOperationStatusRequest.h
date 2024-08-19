#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "InsightsInsightsGetOperationStatusRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FInsightsInsightsGetOperationStatusRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OperationId;
    
    FInsightsInsightsGetOperationStatusRequest();
};

