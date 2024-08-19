#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AmbushSpawnProbability.generated.h"

USTRUCT(BlueprintType)
struct FAmbushSpawnProbability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SpawnProbabilityMap;
    
    ASF_API FAmbushSpawnProbability();
};

