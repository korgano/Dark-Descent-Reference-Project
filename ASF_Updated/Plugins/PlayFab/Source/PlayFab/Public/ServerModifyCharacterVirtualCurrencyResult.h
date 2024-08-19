#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerModifyCharacterVirtualCurrencyResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerModifyCharacterVirtualCurrencyResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Balance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VirtualCurrency;
    
    FServerModifyCharacterVirtualCurrencyResult();
};

