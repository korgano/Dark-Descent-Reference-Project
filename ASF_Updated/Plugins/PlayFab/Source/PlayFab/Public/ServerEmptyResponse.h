#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerEmptyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerEmptyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerEmptyResponse();
};

