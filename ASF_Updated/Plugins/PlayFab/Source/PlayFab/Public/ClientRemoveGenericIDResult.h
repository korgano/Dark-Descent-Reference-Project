#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientRemoveGenericIDResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientRemoveGenericIDResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientRemoveGenericIDResult();
};

