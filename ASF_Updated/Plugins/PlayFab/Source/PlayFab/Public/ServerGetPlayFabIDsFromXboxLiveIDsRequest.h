#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetPlayFabIDsFromXboxLiveIDsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetPlayFabIDsFromXboxLiveIDsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Sandbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XboxLiveAccountIDs;
    
    FServerGetPlayFabIDsFromXboxLiveIDsRequest();
};

