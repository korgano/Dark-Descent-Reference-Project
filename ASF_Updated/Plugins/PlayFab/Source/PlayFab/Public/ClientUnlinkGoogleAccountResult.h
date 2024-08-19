#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkGoogleAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkGoogleAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkGoogleAccountResult();
};

