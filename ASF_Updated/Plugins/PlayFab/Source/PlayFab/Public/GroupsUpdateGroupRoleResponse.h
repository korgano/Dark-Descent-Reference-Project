#pragma once
#include "CoreMinimal.h"
#include "EOperationTypes.h"
#include "PlayFabResultCommon.h"
#include "GroupsUpdateGroupRoleResponse.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FGroupsUpdateGroupRoleResponse : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OperationReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProfileVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOperationTypes SetResult;
    
    FGroupsUpdateGroupRoleResponse();
};

