#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkPSNAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkPSNAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkPSNAccountResult();
};

