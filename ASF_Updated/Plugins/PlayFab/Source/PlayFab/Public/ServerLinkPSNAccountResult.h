#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerLinkPSNAccountResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerLinkPSNAccountResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerLinkPSNAccountResult();
};

