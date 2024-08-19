#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkTwitchAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkTwitchAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkTwitchAccountResult();
};

