#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerRefreshGameServerInstanceHeartbeatRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRefreshGameServerInstanceHeartbeatRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    FServerRefreshGameServerInstanceHeartbeatRequest();
};

