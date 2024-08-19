#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminDeleteMembershipSubscriptionResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeleteMembershipSubscriptionResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminDeleteMembershipSubscriptionResult();
};

