#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientAddGenericIDResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAddGenericIDResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientAddGenericIDResult();
};

