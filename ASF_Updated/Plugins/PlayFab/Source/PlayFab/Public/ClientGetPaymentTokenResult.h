#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetPaymentTokenResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPaymentTokenResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OrderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProviderToken;
    
    FClientGetPaymentTokenResult();
};

