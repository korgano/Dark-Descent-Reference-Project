#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminDeletePlayerResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeletePlayerResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminDeletePlayerResult();
};

