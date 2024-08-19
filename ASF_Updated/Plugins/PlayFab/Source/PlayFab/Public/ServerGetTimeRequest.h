#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerGetTimeRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerGetTimeRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FServerGetTimeRequest();
};

