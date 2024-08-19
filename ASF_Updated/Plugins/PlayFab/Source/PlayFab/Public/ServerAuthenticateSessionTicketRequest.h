#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerAuthenticateSessionTicketRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerAuthenticateSessionTicketRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionTicket;
    
    FServerAuthenticateSessionTicketRequest();
};

