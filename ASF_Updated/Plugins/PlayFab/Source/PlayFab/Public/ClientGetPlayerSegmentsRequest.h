#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetPlayerSegmentsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetPlayerSegmentsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientGetPlayerSegmentsRequest();
};

