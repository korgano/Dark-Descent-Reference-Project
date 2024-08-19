#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkFacebookAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkFacebookAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkFacebookAccountResult();
};

