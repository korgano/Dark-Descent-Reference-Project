#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerLinkXboxAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerLinkXboxAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerLinkXboxAccountResult();
};

