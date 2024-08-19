#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminRevokeInventoryItemsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRevokeInventoryItemsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Errors;
    
    FAdminRevokeInventoryItemsResult();
};

