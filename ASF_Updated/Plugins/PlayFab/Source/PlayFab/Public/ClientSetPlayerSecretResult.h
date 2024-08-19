#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientSetPlayerSecretResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientSetPlayerSecretResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientSetPlayerSecretResult();
};

