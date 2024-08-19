#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "CloudScriptListQueuedFunctionsResult.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptListQueuedFunctionsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlayFabJsonObject*> Functions;
    
    FCloudScriptListQueuedFunctionsResult();
};

