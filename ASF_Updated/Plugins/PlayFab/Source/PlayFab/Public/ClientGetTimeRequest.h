#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ClientGetTimeRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientGetTimeRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    FClientGetTimeRequest();
};

