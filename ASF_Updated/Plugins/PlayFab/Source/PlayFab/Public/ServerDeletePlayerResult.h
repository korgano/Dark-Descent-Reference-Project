#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerDeletePlayerResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerDeletePlayerResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerDeletePlayerResult();
};

