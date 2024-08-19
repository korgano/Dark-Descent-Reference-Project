#pragma once
#include "CoreMinimal.h"
#include "EPublishResult.h"
#include "PlayFabResultCommon.h"
#include "EconomyGetItemPublishStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyGetItemPublishStatusResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPublishResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatusMessage;
    
    FEconomyGetItemPublishStatusResponse();
};

