#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminDeleteTitleRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteTitleRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FAdminDeleteTitleRequest();
};

