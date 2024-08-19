#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientAddSharedGroupMembersResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientAddSharedGroupMembersResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientAddSharedGroupMembersResult();
};

