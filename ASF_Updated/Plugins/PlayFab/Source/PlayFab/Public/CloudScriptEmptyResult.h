#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "CloudScriptEmptyResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptEmptyResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FCloudScriptEmptyResult();
};

