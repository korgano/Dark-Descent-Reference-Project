#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientAcceptTradeResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAcceptTradeResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Trade;
    
    FClientAcceptTradeResponse();
};

