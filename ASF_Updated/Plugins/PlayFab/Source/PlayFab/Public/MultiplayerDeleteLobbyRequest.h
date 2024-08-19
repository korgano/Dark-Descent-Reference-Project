#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerDeleteLobbyRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerDeleteLobbyRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    FMultiplayerDeleteLobbyRequest();
};

