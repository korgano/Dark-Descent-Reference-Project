#pragma once
#include "CoreMinimal.h"
#include "ESegmentPushNotificationDevicePlatform.generated.h"

UENUM(BlueprintType)
enum class ESegmentPushNotificationDevicePlatform : uint8 {
    pfenum_ApplePushNotificationService,
    pfenum_GoogleCloudMessaging,
};

