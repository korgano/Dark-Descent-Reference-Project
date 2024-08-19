#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientAndroidDevicePushNotificationRegistrationRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAndroidDevicePushNotificationRegistrationRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConfirmationMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SendPushNotificationConfirmation;
    
    FClientAndroidDevicePushNotificationRegistrationRequest();
};

