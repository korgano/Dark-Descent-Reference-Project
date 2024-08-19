#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkSteamAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkSteamAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkSteamAccountResult();
};

