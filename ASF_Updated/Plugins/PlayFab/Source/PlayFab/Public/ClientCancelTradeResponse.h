#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientCancelTradeResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientCancelTradeResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Trade;
    
    FClientCancelTradeResponse();
};

