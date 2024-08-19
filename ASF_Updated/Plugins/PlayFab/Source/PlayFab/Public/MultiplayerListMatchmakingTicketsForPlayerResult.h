#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerListMatchmakingTicketsForPlayerResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerListMatchmakingTicketsForPlayerResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketIds;
    
    FMultiplayerListMatchmakingTicketsForPlayerResult();
};

