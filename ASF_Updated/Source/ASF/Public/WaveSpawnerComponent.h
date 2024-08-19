#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnumAiState.h"
#include "Event_WaveSpawnerComponentDelegate.h"
#include "SpawnWaveDatas.h"
#include "WaveSpawnerComponent.generated.h"

class AASFCharacter;
class AActor;
class ASpawnPoint;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UWaveSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_WaveSpawnerComponent OnSpawnWavesStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_WaveSpawnerComponent OnSpawnWavesEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_WaveSpawnerComponent OnSpawnWaveSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_WaveSpawnerComponent OnWaveCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnWaveDatas> Waves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumAiState AIStateForSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool autoStartNextWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayMinNextWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delayMaxNextWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool delayOnFirstWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsedWithAWaveSubObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool infiniteLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float infiniteLoopDelayToRestartMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float infiniteLoopDelayToRestartMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool reUseFirstWaveForPool;
    
    UWaveSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopSpawnWaves();
    
    UFUNCTION(BlueprintCallable)
    void StartSpawnWaves();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnnemySpawnedDelayed(UObject* SpawnedObject);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEnnemySpawnedDeadOrDestroy(AActor* DestroyedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnnemySpawned(ASpawnPoint* SpawnPoint, UObject* SpawnedObject);
    
    UFUNCTION(BlueprintCallable)
    void OnEnnemyDiedOrDestroyed(AASFCharacter* _Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void Log(const FString& debugString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtTheLastWave() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InternalSpawnNextEnemyWave();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastWaveIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnnemySpawnedAliveCount() const;
    
    UFUNCTION(BlueprintCallable)
    void AskSpawnNextEnemyWave();
    
};

