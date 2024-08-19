#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminUpdatePlayerSharedSecretRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdatePlayerSharedSecretRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendlyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecretKey;
    
    FAdminUpdatePlayerSharedSecretRequest();
};

