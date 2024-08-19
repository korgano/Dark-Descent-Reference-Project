#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomySetItemModerationStateResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomySetItemModerationStateResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomySetItemModerationStateResponse();
};

