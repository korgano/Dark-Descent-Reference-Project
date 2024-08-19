#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetTradeStatusRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetTradeStatusRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfferingPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TradeId;
    
    FClientGetTradeStatusRequest();
};

