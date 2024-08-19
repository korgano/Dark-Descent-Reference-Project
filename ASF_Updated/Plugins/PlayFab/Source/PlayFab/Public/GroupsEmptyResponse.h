#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "GroupsEmptyResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FGroupsEmptyResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FGroupsEmptyResponse();
};

