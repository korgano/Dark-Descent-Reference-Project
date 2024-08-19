#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminDeleteTitleResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteTitleResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminDeleteTitleResult();
};

