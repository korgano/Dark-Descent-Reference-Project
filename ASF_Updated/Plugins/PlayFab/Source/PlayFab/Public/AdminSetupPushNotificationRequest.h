#pragma once
#include "CoreMinimal.h"
#include "EPushSetupPlatform.h"
#include "PlayFabRequestCommon.h"
#include "AdminSetupPushNotificationRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSetupPushNotificationRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Credential;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverwriteOldARN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPushSetupPlatform Platform;
    
    FAdminSetupPushNotificationRequest();
};

