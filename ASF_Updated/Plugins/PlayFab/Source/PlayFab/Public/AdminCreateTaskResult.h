#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminCreateTaskResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminCreateTaskResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TaskId;
    
    FAdminCreateTaskResult();
};

