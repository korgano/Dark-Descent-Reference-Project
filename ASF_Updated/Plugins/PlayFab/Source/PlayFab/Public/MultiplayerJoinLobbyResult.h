#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerJoinLobbyResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerJoinLobbyResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    FMultiplayerJoinLobbyResult();
};

