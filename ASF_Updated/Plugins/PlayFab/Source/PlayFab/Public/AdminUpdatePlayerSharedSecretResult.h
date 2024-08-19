#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminUpdatePlayerSharedSecretResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdatePlayerSharedSecretResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminUpdatePlayerSharedSecretResult();
};

