#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetPaymentTokenRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPaymentTokenRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TokenProvider;
    
    FClientGetPaymentTokenRequest();
};

