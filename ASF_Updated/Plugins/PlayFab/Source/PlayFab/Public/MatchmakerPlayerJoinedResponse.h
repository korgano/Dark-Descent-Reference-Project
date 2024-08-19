#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MatchmakerPlayerJoinedResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMatchmakerPlayerJoinedResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FMatchmakerPlayerJoinedResponse();
};

