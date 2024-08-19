#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FacebookInstantGamesIds;
    
    FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest();
};

