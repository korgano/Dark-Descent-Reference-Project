#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "InsightsInsightsGetPendingOperationsRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FInsightsInsightsGetPendingOperationsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OperationType;
    
    FInsightsInsightsGetPendingOperationsRequest();
};

