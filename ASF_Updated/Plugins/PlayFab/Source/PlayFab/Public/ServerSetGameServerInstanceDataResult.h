#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSetGameServerInstanceDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSetGameServerInstanceDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerSetGameServerInstanceDataResult();
};

