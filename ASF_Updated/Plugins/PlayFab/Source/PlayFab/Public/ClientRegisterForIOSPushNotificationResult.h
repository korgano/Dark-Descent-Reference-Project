#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientRegisterForIOSPushNotificationResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientRegisterForIOSPushNotificationResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientRegisterForIOSPushNotificationResult();
};

