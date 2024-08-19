#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ServerUpdateCharacterStatisticsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerUpdateCharacterStatisticsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FServerUpdateCharacterStatisticsResult();
};

