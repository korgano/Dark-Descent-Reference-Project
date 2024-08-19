#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerCancelServerBackfillTicketResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerCancelServerBackfillTicketResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FMultiplayerCancelServerBackfillTicketResult();
};

