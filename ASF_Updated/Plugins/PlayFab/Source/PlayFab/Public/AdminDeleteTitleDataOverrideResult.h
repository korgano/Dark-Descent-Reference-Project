#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminDeleteTitleDataOverrideResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteTitleDataOverrideResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminDeleteTitleDataOverrideResult();
};

