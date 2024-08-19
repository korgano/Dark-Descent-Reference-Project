#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminRevokeInventoryResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRevokeInventoryResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminRevokeInventoryResult();
};

