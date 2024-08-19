#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerDeletePushNotificationTemplateResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerDeletePushNotificationTemplateResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerDeletePushNotificationTemplateResult();
};

