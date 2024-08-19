#pragma once
#include "CoreMinimal.h"
#include "GameplayTwinReference.h"
#include "SpawnWaveEnnemyDatas.h"
#include "SpawnWaveDatas.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ASF_API FSpawnWaveDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnWaveEnnemyDatas> ennemiesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTwinReference> spawnPointsTwinAssigned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float timeBeforeWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useRandomTimeBeforeWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool randomOrderSpawn;
    
    FSpawnWaveDatas();
};

