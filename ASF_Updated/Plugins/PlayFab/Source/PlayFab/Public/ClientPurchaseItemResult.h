#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientPurchaseItemResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientPurchaseItemResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Items;
    
    FClientPurchaseItemResult();
};

