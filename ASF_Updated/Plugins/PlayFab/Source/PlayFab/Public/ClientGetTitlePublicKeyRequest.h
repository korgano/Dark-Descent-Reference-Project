#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetTitlePublicKeyRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetTitlePublicKeyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleSharedSecret;
    
    FClientGetTitlePublicKeyRequest();
};

