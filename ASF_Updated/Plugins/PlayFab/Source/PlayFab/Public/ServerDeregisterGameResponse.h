#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerDeregisterGameResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerDeregisterGameResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerDeregisterGameResponse();
};

