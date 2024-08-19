#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerGetRemoteLoginEndpointResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetRemoteLoginEndpointResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IPV4Address;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Port;
    
    FMultiplayerGetRemoteLoginEndpointResponse();
};

