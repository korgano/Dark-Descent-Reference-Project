#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "CloudScriptRegisterHttpFunctionRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptRegisterHttpFunctionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionUrl;
    
    FCloudScriptRegisterHttpFunctionRequest();
};

