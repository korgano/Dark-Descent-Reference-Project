#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUpdateSharedGroupDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUpdateSharedGroupDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUpdateSharedGroupDataResult();
};

