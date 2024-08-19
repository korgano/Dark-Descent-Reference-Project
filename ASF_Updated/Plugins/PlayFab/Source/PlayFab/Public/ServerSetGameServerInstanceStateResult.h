#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSetGameServerInstanceStateResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSetGameServerInstanceStateResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerSetGameServerInstanceStateResult();
};

