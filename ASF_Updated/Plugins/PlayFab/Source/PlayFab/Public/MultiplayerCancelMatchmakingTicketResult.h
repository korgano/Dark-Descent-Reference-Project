#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerCancelMatchmakingTicketResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerCancelMatchmakingTicketResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FMultiplayerCancelMatchmakingTicketResult();
};

