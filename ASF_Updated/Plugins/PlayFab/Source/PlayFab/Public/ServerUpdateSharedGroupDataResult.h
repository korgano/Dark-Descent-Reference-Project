#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUpdateSharedGroupDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUpdateSharedGroupDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerUpdateSharedGroupDataResult();
};

