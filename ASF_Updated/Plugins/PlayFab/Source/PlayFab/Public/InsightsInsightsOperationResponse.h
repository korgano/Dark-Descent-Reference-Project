#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "InsightsInsightsOperationResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FInsightsInsightsOperationResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OperationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OperationType;
    
    FInsightsInsightsOperationResponse();
};

