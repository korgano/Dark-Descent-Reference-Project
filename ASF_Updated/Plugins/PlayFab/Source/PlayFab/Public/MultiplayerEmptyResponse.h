#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "MultiplayerEmptyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerEmptyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FMultiplayerEmptyResponse();
};

