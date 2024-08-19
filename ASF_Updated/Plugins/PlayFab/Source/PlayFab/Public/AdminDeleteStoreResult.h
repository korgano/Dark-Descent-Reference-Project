#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminDeleteStoreResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteStoreResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminDeleteStoreResult();
};

