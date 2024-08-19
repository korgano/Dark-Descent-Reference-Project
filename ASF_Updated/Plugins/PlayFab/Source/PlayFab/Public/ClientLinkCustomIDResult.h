#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkCustomIDResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkCustomIDResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkCustomIDResult();
};

