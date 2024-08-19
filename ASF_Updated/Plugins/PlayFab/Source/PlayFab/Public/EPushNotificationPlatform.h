#pragma once
#include "CoreMinimal.h"
#include "EPushNotificationPlatform.generated.h"

UENUM(BlueprintType)
enum class EPushNotificationPlatform : uint8 {
    pfenum_ApplePushNotificationService,
    pfenum_GoogleCloudMessaging,
};

