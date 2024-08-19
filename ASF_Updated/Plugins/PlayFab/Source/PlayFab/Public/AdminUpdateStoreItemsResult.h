#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminUpdateStoreItemsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdateStoreItemsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminUpdateStoreItemsResult();
};

