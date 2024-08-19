#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminSetPublishedRevisionResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSetPublishedRevisionResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminSetPublishedRevisionResult();
};

