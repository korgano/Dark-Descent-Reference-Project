#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientRemoveSharedGroupMembersResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientRemoveSharedGroupMembersResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientRemoveSharedGroupMembersResult();
};

