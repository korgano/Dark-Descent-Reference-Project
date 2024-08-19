#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminSetTitleDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSetTitleDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminSetTitleDataResult();
};

