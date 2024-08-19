#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetPhotonAuthenticationTokenRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPhotonAuthenticationTokenRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PhotonApplicationId;
    
    FClientGetPhotonAuthenticationTokenRequest();
};

