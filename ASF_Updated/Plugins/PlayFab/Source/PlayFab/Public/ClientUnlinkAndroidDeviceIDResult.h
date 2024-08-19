#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkAndroidDeviceIDResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkAndroidDeviceIDResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkAndroidDeviceIDResult();
};

