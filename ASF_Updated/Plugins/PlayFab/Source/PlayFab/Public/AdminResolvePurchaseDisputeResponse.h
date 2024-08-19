#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminResolvePurchaseDisputeResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminResolvePurchaseDisputeResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PurchaseStatus;
    
    FAdminResolvePurchaseDisputeResponse();
};

