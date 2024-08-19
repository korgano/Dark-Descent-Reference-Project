#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminListVirtualCurrencyTypesRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminListVirtualCurrencyTypesRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FAdminListVirtualCurrencyTypesRequest();
};

