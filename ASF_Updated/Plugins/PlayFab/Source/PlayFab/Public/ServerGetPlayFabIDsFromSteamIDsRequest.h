#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetPlayFabIDsFromSteamIDsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetPlayFabIDsFromSteamIDsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamStringIDs;
    
    FServerGetPlayFabIDsFromSteamIDsRequest();
};

