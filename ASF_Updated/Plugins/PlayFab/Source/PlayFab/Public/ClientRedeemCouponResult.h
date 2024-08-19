#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientRedeemCouponResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientRedeemCouponResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> GrantedItems;
    
    FClientRedeemCouponResult();
};

