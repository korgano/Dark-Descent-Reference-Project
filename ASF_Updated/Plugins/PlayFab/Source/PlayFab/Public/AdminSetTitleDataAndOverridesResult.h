#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminSetTitleDataAndOverridesResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSetTitleDataAndOverridesResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminSetTitleDataAndOverridesResult();
};

