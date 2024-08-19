#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSendPushNotificationResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSendPushNotificationResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerSendPushNotificationResult();
};

