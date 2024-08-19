#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetPlayerSharedSecretsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPlayerSharedSecretsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FAdminGetPlayerSharedSecretsRequest();
};

