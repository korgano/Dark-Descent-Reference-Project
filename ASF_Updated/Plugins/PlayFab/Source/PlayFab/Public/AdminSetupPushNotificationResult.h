#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminSetupPushNotificationResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSetupPushNotificationResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ARN;
    
    FAdminSetupPushNotificationResult();
};

