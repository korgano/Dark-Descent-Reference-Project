#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientAttributeInstallResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAttributeInstallResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientAttributeInstallResult();
};

