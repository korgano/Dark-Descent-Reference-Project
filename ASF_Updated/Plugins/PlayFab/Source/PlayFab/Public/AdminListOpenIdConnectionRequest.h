#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminListOpenIdConnectionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminListOpenIdConnectionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FAdminListOpenIdConnectionRequest();
};

