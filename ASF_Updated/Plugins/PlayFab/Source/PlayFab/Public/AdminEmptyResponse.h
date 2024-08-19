#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminEmptyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminEmptyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminEmptyResponse();
};

