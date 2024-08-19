#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerLinkServerCustomIdResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerLinkServerCustomIdResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerLinkServerCustomIdResult();
};

