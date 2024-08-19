#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkGameCenterAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkGameCenterAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkGameCenterAccountResult();
};

