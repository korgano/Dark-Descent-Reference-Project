#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "CloudScriptGetFunctionResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptGetFunctionResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ConnectionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QueueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TriggerType;
    
    FCloudScriptGetFunctionResult();
};

