#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminUpdateRandomResultTablesResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdateRandomResultTablesResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FAdminUpdateRandomResultTablesResult();
};

