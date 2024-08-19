#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MatchmakerPlayerLeftResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerLeftResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FMatchmakerPlayerLeftResponse();
};

