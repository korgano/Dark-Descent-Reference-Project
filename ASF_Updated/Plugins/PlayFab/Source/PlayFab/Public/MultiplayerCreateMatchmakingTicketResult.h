#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerCreateMatchmakingTicketResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerCreateMatchmakingTicketResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketId;
    
    FMultiplayerCreateMatchmakingTicketResult();
};

