#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientConsumePSNEntitlementsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientConsumePSNEntitlementsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> ItemsGranted;
    
    FClientConsumePSNEntitlementsResult();
};

