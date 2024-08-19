#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerMoveItemToCharacterFromUserResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerMoveItemToCharacterFromUserResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerMoveItemToCharacterFromUserResult();
};

