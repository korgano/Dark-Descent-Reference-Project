#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkXboxAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkXboxAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkXboxAccountResult();
};

