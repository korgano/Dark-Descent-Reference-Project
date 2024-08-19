#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminDeletePlayerSharedSecretResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminDeletePlayerSharedSecretResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminDeletePlayerSharedSecretResult();
};

