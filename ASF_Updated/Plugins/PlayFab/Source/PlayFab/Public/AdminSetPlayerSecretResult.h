#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminSetPlayerSecretResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSetPlayerSecretResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminSetPlayerSecretResult();
};

