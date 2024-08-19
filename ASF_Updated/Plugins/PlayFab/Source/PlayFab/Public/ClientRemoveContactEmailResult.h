#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientRemoveContactEmailResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientRemoveContactEmailResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientRemoveContactEmailResult();
};

