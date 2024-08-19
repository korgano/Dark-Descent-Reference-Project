#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientSetFriendTagsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientSetFriendTagsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientSetFriendTagsResult();
};

