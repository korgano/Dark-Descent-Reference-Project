#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientEmptyResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientEmptyResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientEmptyResult();
};

