#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetLeaderboardForUsersCharactersRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetLeaderboardForUsersCharactersRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticName;
    
    FClientGetLeaderboardForUsersCharactersRequest();
};

