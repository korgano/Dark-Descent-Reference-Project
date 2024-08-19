#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerCancelAllMatchmakingTicketsForPlayerResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerCancelAllMatchmakingTicketsForPlayerResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FMultiplayerCancelAllMatchmakingTicketsForPlayerResult();
};

