#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUnlinkServerCustomIdResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUnlinkServerCustomIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerUnlinkServerCustomIdResult();
};

