#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "GroupsListGroupBlocksResponse.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FGroupsListGroupBlocksResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> BlockedEntities;
    
    FGroupsListGroupBlocksResponse();
};

