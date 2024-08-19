#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminAddLocalizedNewsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminAddLocalizedNewsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminAddLocalizedNewsResult();
};

