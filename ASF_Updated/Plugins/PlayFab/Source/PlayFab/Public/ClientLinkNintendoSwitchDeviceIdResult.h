#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkNintendoSwitchDeviceIdResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkNintendoSwitchDeviceIdResult();
};

