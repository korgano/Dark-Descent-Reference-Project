#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SystemicData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FSystemicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggressivenessIncrementationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggressivenessIncrementationTimerMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AggressivenessDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FoeSpawnParamsDataTable;
    
    ASF_API FSystemicData();
};

