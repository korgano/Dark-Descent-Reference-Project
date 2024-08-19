#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminRunTaskResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminRunTaskResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TaskInstanceId;
    
    FAdminRunTaskResult();
};

