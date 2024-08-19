#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientCancelTradeRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientCancelTradeRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TradeId;
    
    FClientCancelTradeRequest();
};

