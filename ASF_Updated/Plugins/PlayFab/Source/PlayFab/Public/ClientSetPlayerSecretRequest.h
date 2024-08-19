#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientSetPlayerSecretRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientSetPlayerSecretRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EncryptedRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerSecret;
    
    FClientSetPlayerSecretRequest();
};

