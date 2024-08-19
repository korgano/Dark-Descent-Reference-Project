#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUnlinkNintendoSwitchDeviceIdResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUnlinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUnlinkNintendoSwitchDeviceIdResult();
};

