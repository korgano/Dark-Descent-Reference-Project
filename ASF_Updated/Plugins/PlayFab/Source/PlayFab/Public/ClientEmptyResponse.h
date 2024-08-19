#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientEmptyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientEmptyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientEmptyResponse();
};

