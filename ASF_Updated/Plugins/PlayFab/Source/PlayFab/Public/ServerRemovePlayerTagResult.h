#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerRemovePlayerTagResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRemovePlayerTagResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerRemovePlayerTagResult();
};

