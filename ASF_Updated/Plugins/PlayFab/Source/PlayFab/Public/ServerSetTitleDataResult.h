#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSetTitleDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSetTitleDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerSetTitleDataResult();
};

