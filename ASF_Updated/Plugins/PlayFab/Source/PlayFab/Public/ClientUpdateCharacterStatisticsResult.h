#pragma once
#include "CoreMinimal.h"
#include "PlayFabResultCommon.h"
#include "ClientUpdateCharacterStatisticsResult.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FClientUpdateCharacterStatisticsResult : public FPlayFabResultCommon {
    GENERATED_BODY()
public:
    FClientUpdateCharacterStatisticsResult();
};

