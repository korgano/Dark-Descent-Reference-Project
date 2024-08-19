#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerLobbyEmptyResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerLobbyEmptyResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FMultiplayerLobbyEmptyResult();
};

