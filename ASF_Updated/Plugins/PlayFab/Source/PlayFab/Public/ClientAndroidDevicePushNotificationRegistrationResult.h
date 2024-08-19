#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientAndroidDevicePushNotificationRegistrationResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAndroidDevicePushNotificationRegistrationResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientAndroidDevicePushNotificationRegistrationResult();
};

