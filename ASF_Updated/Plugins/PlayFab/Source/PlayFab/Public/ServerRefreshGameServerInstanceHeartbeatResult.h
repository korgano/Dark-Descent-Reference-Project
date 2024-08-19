#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerRefreshGameServerInstanceHeartbeatResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRefreshGameServerInstanceHeartbeatResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerRefreshGameServerInstanceHeartbeatResult();
};

