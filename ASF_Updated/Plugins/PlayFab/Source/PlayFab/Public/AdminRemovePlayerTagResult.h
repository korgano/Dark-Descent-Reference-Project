#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminRemovePlayerTagResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRemovePlayerTagResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminRemovePlayerTagResult();
};

