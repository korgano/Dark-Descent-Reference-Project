#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSavePushNotificationTemplateResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSavePushNotificationTemplateResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PushNotificationTemplateId;
    
    FServerSavePushNotificationTemplateResult();
};

