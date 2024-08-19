#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "CloudScriptListFunctionsRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptListFunctionsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    FCloudScriptListFunctionsRequest();
};

