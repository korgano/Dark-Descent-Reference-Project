#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerListServerBackfillTicketsForPlayerResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerListServerBackfillTicketsForPlayerResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketIds;
    
    FMultiplayerListServerBackfillTicketsForPlayerResult();
};

