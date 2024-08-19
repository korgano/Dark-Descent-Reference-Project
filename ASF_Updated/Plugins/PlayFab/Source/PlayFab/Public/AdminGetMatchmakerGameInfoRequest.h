#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetMatchmakerGameInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetMatchmakerGameInfoRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    FAdminGetMatchmakerGameInfoRequest();
};

