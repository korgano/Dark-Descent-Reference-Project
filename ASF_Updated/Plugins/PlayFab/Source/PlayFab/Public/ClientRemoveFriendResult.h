#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientRemoveFriendResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientRemoveFriendResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientRemoveFriendResult();
};

