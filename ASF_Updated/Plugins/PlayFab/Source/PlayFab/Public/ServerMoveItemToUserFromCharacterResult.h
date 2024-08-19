#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerMoveItemToUserFromCharacterResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerMoveItemToUserFromCharacterResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerMoveItemToUserFromCharacterResult();
};

