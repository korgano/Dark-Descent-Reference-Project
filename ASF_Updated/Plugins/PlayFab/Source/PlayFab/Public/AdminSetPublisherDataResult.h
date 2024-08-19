#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminSetPublisherDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSetPublisherDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminSetPublisherDataResult();
};

