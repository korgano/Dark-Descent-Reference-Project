#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerJoinMatchmakingTicketResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerJoinMatchmakingTicketResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FMultiplayerJoinMatchmakingTicketResult();
};

