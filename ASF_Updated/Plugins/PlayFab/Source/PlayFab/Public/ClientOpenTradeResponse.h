#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientOpenTradeResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientOpenTradeResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Trade;
    
    FClientOpenTradeResponse();
};

