#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MatchmakerAuthUserRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerAuthUserRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuthorizationTicket;
    
    FMatchmakerAuthUserRequest();
};

