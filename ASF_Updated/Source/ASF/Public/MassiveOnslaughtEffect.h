#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EnumAiState.h"
#include "GenericOnslaughtEffect.h"
#include "MassiveOnslaughtAlienBindDelegateDelegate.h"
#include "MassiveOnslaughtData.h"
#include "MassiveOnslaughtEffect.generated.h"

class AAIController_Alien;
class AASFCharacter;
class AAlien;
class APawn;
class ARoomCluster;
class ASpawnPoint;
class UEvent_MassiveOnslaught_DataAsset;
class UObject;
class USpawnPoint_UsedByMOEffect;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API UMassiveOnslaughtEffect : public UGenericOnslaughtEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEvent_MassiveOnslaught_DataAsset* MODataAsset;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassiveOnslaughtAlienBindDelegate OnAlienBound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassiveOnslaughtAlienBindDelegate OnAlienUnbound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassiveOnslaughtData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> AlienGroupToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> SpawnedByMassiveOnslaughtEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpawnPoint* ChosenSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USpawnPoint_UsedByMOEffect> UsedByMassiveOnslaughtEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle WaveSpawnTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAlien*> DeferredSpawnedAliens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefeatedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAlien*> BoundAliens;
    
public:
    UMassiveOnslaughtEffect();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWaveSpawnTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnPointCondemned(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterSet(ARoomCluster* RoomCluster);
    
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterRebuilt(ARoomCluster* RoomCluster);
    
    UFUNCTION(BlueprintCallable)
    void OnMassiveOnslaughtAlienSpawned(ASpawnPoint* SpawnPoint, UObject* SpawnedObject);
    
    UFUNCTION(BlueprintCallable)
    void OnChosenPointSpawnedPawn(ASpawnPoint* SpawnPoint, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnAlienDeathOrDestroyed(AASFCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnAlienChangeState(AAIController_Alien* AIController, EnumAiState OldState, EnumAiState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnAlienAbducting(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingAliensToKillCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMassiveOnslaughtData GetMOData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AAlien*> GetBoundAliens() const;
    
};

