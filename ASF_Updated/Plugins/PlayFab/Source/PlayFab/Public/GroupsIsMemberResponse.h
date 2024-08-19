#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "GroupsIsMemberResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FGroupsIsMemberResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMember;
    
    FGroupsIsMemberResponse();
};

