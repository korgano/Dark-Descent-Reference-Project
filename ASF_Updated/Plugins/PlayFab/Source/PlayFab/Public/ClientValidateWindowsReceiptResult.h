#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientValidateWindowsReceiptResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientValidateWindowsReceiptResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Fulfillments;
    
    FClientValidateWindowsReceiptResult();
};

