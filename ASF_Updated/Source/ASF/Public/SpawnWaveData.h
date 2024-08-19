#pragma once
#include "CoreMinimal.h"
#include "SpawnWaveData.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct ASF_API FSpawnWaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> EnemyWave;
    
    FSpawnWaveData();
};

