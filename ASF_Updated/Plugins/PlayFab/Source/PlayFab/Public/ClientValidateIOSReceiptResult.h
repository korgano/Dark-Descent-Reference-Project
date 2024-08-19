#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientValidateIOSReceiptResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientValidateIOSReceiptResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Fulfillments;
    
    FClientValidateIOSReceiptResult();
};

