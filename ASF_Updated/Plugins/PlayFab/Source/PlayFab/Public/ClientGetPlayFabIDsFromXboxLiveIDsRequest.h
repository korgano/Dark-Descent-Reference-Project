#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetPlayFabIDsFromXboxLiveIDsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayFabIDsFromXboxLiveIDsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Sandbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XboxLiveAccountIDs;
    
    FClientGetPlayFabIDsFromXboxLiveIDsRequest();
};

