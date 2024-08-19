#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerRegisterGameResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRegisterGameResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    FServerRegisterGameResponse();
};

