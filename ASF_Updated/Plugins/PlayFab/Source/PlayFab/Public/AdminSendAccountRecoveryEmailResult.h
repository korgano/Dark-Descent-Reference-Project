#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminSendAccountRecoveryEmailResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSendAccountRecoveryEmailResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminSendAccountRecoveryEmailResult();
};

