#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUnlinkXboxAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUnlinkXboxAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerUnlinkXboxAccountResult();
};

