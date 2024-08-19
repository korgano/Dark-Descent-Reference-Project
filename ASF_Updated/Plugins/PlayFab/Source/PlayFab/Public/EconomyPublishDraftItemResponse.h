#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyPublishDraftItemResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyPublishDraftItemResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyPublishDraftItemResponse();
};

