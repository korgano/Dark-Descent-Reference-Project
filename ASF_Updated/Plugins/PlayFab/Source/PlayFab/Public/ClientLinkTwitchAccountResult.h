#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkTwitchAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkTwitchAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkTwitchAccountResult();
};

