#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminModifyUserVirtualCurrencyResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminModifyUserVirtualCurrencyResult : public FPlayFabResultCommon {
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
    
    FAdminModifyUserVirtualCurrencyResult();
};

