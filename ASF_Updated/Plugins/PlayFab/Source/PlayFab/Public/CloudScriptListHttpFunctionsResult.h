#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "CloudScriptListHttpFunctionsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptListHttpFunctionsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Functions;
    
    FCloudScriptListHttpFunctionsResult();
};

