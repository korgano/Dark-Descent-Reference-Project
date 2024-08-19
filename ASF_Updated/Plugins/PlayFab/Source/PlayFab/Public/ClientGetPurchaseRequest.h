#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetPurchaseRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPurchaseRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OrderId;
    
    FClientGetPurchaseRequest();
};

