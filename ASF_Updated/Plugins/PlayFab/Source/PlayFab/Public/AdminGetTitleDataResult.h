#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "AdminGetTitleDataResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetTitleDataResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Data;
    
    FAdminGetTitleDataResult();
};

