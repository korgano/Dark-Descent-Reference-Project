#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientAddOrUpdateContactEmailResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAddOrUpdateContactEmailResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientAddOrUpdateContactEmailResult();
};

