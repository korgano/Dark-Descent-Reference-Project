#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientConsumeMicrosoftStoreEntitlementsResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientConsumeMicrosoftStoreEntitlementsResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Items;
    
    FClientConsumeMicrosoftStoreEntitlementsResponse();
};

