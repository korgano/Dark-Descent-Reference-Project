#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSendCustomAccountRecoveryEmailResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSendCustomAccountRecoveryEmailResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerSendCustomAccountRecoveryEmailResult();
};

