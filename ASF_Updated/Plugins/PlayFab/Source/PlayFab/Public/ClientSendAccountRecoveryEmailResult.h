#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientSendAccountRecoveryEmailResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientSendAccountRecoveryEmailResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientSendAccountRecoveryEmailResult();
};

