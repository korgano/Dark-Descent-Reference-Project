#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetAllSegmentsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetAllSegmentsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FServerGetAllSegmentsRequest();
};

