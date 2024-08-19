#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyUpdateCatalogConfigResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyUpdateCatalogConfigResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyUpdateCatalogConfigResponse();
};

