#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminCheckLimitedEditionItemAvailabilityResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminCheckLimitedEditionItemAvailabilityResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FAdminCheckLimitedEditionItemAvailabilityResult();
};

