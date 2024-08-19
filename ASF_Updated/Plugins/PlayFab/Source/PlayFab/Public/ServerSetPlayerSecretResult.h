#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSetPlayerSecretResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSetPlayerSecretResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerSetPlayerSecretResult();
};

