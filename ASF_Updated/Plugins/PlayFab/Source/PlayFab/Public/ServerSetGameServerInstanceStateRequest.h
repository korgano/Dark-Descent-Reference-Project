#pragma once
#include "CoreMinimal.h"
#include "EGameInstanceState.h"
#include "PlayFabRequestCommon.h"
#include "ServerSetGameServerInstanceStateRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSetGameServerInstanceStateRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameInstanceState State;
    
    FServerSetGameServerInstanceStateRequest();
};

