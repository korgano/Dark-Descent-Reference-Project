#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminLookupUserAccountInfoResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminLookupUserAccountInfoResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* UserInfo;
    
    FAdminLookupUserAccountInfoResult();
};

