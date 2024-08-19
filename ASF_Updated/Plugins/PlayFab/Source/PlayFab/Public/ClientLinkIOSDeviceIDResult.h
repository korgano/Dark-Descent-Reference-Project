#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientLinkIOSDeviceIDResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientLinkIOSDeviceIDResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientLinkIOSDeviceIDResult();
};

