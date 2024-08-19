#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminResetPasswordResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminResetPasswordResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminResetPasswordResult();
};

