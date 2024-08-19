#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerEmptyResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerEmptyResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerEmptyResult();
};

