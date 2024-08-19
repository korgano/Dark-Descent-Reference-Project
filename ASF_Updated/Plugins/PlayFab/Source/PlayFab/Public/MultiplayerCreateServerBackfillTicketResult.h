#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerCreateServerBackfillTicketResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerCreateServerBackfillTicketResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketId;
    
    FMultiplayerCreateServerBackfillTicketResult();
};

