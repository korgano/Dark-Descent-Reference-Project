#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AggressivenessParams.generated.h"

USTRUCT(BlueprintType)
struct FAggressivenessParams : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> EnemySpawnProbability;
    
    ASF_API FAggressivenessParams();
};

