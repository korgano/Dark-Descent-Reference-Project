#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientModifyUserVirtualCurrencyResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientModifyUserVirtualCurrencyResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Balance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalanceChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VirtualCurrency;
    
    FClientModifyUserVirtualCurrencyResult();
};

