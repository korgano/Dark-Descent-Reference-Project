#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerAddSharedGroupMembersResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerAddSharedGroupMembersResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerAddSharedGroupMembersResult();
};

