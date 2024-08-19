#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientValidateAmazonReceiptResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientValidateAmazonReceiptResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Fulfillments;
    
    FClientValidateAmazonReceiptResult();
};

