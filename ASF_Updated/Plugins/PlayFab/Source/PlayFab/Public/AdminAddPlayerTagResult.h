#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminAddPlayerTagResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminAddPlayerTagResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminAddPlayerTagResult();
};

