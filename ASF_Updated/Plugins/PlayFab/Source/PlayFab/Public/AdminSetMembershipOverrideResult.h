#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminSetMembershipOverrideResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSetMembershipOverrideResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminSetMembershipOverrideResult();
};

