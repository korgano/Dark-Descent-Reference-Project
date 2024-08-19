#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientConsumeXboxEntitlementsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientConsumeXboxEntitlementsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Items;
    
    FClientConsumeXboxEntitlementsResult();
};

