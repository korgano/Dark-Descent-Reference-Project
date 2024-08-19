#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUnlinkPSNAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUnlinkPSNAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerUnlinkPSNAccountResult();
};

