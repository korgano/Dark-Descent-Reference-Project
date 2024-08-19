#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerRevokeInventoryItemsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRevokeInventoryItemsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Errors;
    
    FServerRevokeInventoryItemsResult();
};

