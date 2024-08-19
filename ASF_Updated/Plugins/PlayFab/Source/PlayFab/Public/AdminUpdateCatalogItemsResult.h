#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminUpdateCatalogItemsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdateCatalogItemsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminUpdateCatalogItemsResult();
};

