#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkAndroidDeviceIDResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkAndroidDeviceIDResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkAndroidDeviceIDResult();
};

