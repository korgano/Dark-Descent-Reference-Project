#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerAddPlayerTagResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerAddPlayerTagResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerAddPlayerTagResult();
};

