#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminCreatePlayerSharedSecretRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminCreatePlayerSharedSecretRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendlyName;
    
    FAdminCreatePlayerSharedSecretRequest();
};

