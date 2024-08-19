#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "CloudScriptPostFunctionResultForEntityTriggeredActionRequest.generated.h"

class UPlayFabJsonObject;

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptPostFunctionResultForEntityTriggeredActionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* Entity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabJsonObject* FunctionResult;
    
    FCloudScriptPostFunctionResultForEntityTriggeredActionRequest();
};

