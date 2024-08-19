#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminBlankResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminBlankResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminBlankResult();
};

