#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerSetPublisherDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSetPublisherDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerSetPublisherDataResult();
};

