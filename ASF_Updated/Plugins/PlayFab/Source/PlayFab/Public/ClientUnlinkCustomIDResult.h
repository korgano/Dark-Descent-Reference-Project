#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkCustomIDResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkCustomIDResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkCustomIDResult();
};

