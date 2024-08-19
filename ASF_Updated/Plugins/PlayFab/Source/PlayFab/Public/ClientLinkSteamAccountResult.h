#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkSteamAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkSteamAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkSteamAccountResult();
};

