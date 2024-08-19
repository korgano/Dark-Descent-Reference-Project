#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminIncrementLimitedEditionItemAvailabilityResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminIncrementLimitedEditionItemAvailabilityResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminIncrementLimitedEditionItemAvailabilityResult();
};

