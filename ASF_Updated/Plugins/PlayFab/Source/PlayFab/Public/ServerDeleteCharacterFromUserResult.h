#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerDeleteCharacterFromUserResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerDeleteCharacterFromUserResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerDeleteCharacterFromUserResult();
};

