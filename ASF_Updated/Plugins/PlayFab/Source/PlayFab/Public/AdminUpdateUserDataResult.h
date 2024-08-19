#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminUpdateUserDataResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminUpdateUserDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataVersion;
    
    FAdminUpdateUserDataResult();
};

