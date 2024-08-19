#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "EconomyDeleteItemResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FEconomyDeleteItemResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FEconomyDeleteItemResponse();
};

