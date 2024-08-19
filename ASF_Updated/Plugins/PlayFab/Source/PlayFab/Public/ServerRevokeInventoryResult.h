#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerRevokeInventoryResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRevokeInventoryResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerRevokeInventoryResult();
};

