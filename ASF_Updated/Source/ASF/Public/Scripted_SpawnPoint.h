#pragma once
#include "CoreMinimal.h"
#include "EnumAiState.h"
#include "SpawnDeferredDynamicDelegateDelegate.h"
#include "SpawnPoint.h"
#include "SpawnWaveData.h"
#include "Scripted_SpawnPoint.generated.h"

UCLASS(Blueprintable)
class ASF_API AScripted_SpawnPoint : public ASpawnPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnWaveData> EnemyWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextWaveToBeSpawnedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetIndexOnLastWaveSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAiState AlienSpawnAIState;
    
public:
    AScripted_SpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnNextEnemyWave(bool SpawnAllWavesAtOnce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpawnedAllWaves() const;
    
    UFUNCTION(BlueprintCallable)
    void DeferredSpawnNextEnemyWave(const FSpawnDeferredDynamicDelegate& DeferredSpawnEvent, bool SpawnAllWavesAtOnce);
    
};

