#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkFacebookInstantGamesIdResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkFacebookInstantGamesIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkFacebookInstantGamesIdResult();
};

