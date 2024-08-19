#pragma once
#include "CoreMinimal.h"
#include "EResolutionOutcome.h"
#include "PlayFabRequestCommon.h"
#include "AdminResolvePurchaseDisputeRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminResolvePurchaseDisputeRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OrderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EResolutionOutcome Outcome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Reason;
    
    FAdminResolvePurchaseDisputeRequest();
};

