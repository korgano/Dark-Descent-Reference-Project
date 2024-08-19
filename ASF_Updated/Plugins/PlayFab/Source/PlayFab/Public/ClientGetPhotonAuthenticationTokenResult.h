#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientGetPhotonAuthenticationTokenResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPhotonAuthenticationTokenResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PhotonCustomAuthenticationToken;
    
    FClientGetPhotonAuthenticationTokenResult();
};

