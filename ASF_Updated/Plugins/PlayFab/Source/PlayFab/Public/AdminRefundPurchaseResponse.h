#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminRefundPurchaseResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRefundPurchaseResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PurchaseStatus;
    
    FAdminRefundPurchaseResponse();
};

