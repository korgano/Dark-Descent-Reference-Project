#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerRemoveSharedGroupMembersResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerRemoveSharedGroupMembersResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerRemoveSharedGroupMembersResult();
};

