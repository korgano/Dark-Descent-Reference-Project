#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminDeletePlayerSharedSecretRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeletePlayerSharedSecretRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SecretKey;
    
    FAdminDeletePlayerSharedSecretRequest();
};

