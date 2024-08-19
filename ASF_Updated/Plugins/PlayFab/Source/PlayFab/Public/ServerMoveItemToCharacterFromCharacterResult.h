#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerMoveItemToCharacterFromCharacterResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerMoveItemToCharacterFromCharacterResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerMoveItemToCharacterFromCharacterResult();
};

