#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerSubscribeToLobbyResourceResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerSubscribeToLobbyResourceResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Topic;
    
    FMultiplayerSubscribeToLobbyResourceResult();
};

