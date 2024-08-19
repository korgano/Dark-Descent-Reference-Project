#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerListUsersCharactersRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerListUsersCharactersRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    FServerListUsersCharactersRequest();
};

