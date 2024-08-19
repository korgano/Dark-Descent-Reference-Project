#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetLeaderboardForUsersCharactersRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetLeaderboardForUsersCharactersRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticName;
    
    FServerGetLeaderboardForUsersCharactersRequest();
};

