#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerCancelAllServerBackfillTicketsForPlayerResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerCancelAllServerBackfillTicketsForPlayerResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FMultiplayerCancelAllServerBackfillTicketsForPlayerResult();
};

