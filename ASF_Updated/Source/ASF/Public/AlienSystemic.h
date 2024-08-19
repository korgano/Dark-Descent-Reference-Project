#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AlienSystemicDelegateDelegate.h"
#include "AvailableGuardPathCountChangedDelegateDelegate.h"
#include "BossData.h"
#include "BossDestroyDelegateDelegate.h"
#include "BossSpawnDelegateDelegate.h"
#include "EOnslaughtType.h"
#include "ExplorationSpawnTimerDelegateDelegate.h"
#include "FactionSystemic.h"
#include "HuntUpdateDelegatteDelegate.h"
#include "OnSpawnAlienFromSpawnPointDelegate.h"
#include "PatrolAndGuardPathUpdatesDelegateDelegate.h"
#include "StasisPointRegistrationDelegateDelegate.h"
#include "AlienSystemic.generated.h"

class AAIGuardPath;
class AASFCharacter;
class AAlien;
class APawn;
class ASpawnPoint;
class AStasisPoint;
class UAIPointOfInterestConfig;
class UAIPointOfInterestContainer;
class UAlienSystemicDataAsset;
class UHiveTranq_XenoTech_DataAsset;
class UObject;
class UTMEvent;

UCLASS(Blueprintable)
class ASF_API UAlienSystemic : public UFactionSystemic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatrolAndGuardPathUpdatesDelegate OnAlienNeedsUpdateOnPatrolState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatrolAndGuardPathUpdatesDelegate OnGuardPathNeedsUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlienSystemicDelegate OnPatrolComputingDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHuntUpdateDelegatte OnHuntUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHuntUpdateDelegatte OnNoiseShared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnAlienFromSpawnPoint OnSpawnAlienFromSpawnPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ExplorationSpawnTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PatrolsAlreadySpawnedSubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIGuardPath*> AvailableGuardPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHiveTranq_XenoTech_DataAsset* HiveTranq_DataAsset;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplorationSpawnTimerDelegate OnExplorationSpawnTimerStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExplorationSpawnTimerDelegate OnExplorationSpawnTimerStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailableGuardPathCountChangedDelegate OnAvailableGuardPathCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStasisPointRegistrationDelegate OnStasisPointRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStasisPointRegistrationDelegate OnStasisPointUnregistered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBossData> BossDatas;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossSpawnDelegate OnBossSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossDestroyDelegate OnBossDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOnslaughtType, TSoftClassPtr<UTMEvent>> OnslaughtEventClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastSharedNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AliensAbducting;
    
public:
    UAlienSystemic();

    UFUNCTION(BlueprintCallable)
    void UnRegisterStasisPoint(AStasisPoint* _SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void TryShareNoiseLocation(FVector NoiseOrigin, int32 GraphID);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPatrolDrone(AAIGuardPath* ForcedGuardPath);
    
    UFUNCTION(BlueprintCallable)
    void SpawnExplorationRunner(ASpawnPoint* ForcedSpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBoss(ASpawnPoint* ForcedSpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAlienAbducting(UObject* _AlienAbducting);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStasisPoint(AStasisPoint* _SpawnPoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGuardPathRemoved(AAIGuardPath* GuardPath);
    
    UFUNCTION(BlueprintCallable)
    void OnGuardPathAvailabilityChanged(AAIGuardPath* GuardPath, bool IsAvailable);
    
    UFUNCTION(BlueprintCallable)
    void OnGuardPathAdded(AAIGuardPath* GuardPath);
    
    UFUNCTION(BlueprintCallable)
    void OnExplorationSpawnTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnBossSpawnedBySpawnPoint(ASpawnPoint* SpawnPoint, APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnBossDeferredSpawnedBySpawnPoint(ASpawnPoint* SpawnPoint, UObject* SpawnedObject);
    
    UFUNCTION(BlueprintCallable)
    void OnBossDeathOrDestroyed(AASFCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnAlienSpawned(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig);
    
    UFUNCTION(BlueprintCallable)
    void OnAlienDestroyed(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyBossUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAliveBossForAggressiveness(int32 Aggressiveness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AStasisPoint*> GetStasisPoints(FGameplayTag _StasisPointType);
    
protected:
    UFUNCTION(BlueprintCallable)
    TSoftClassPtr<UTMEvent> GetOnslaughtEventClassOfType(EOnslaughtType OnslaughtType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPatrolDronesForCurrentAggressiveness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AStasisPoint*> GetInactiveStasisPoints(FGameplayTag _StasisPointType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimerHandle GetExplorationSpawnTimerHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMaxGuardPathCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMaxAliensOnPatrol() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLivingAliens(bool RemoveStasis) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AAIGuardPath*> GetAvailableGuardPaths() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAlienSystemicDataAsset* GetAlienSystemicDataAsset() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceOnslaughtOfType(EOnslaughtType OnslaughtType);
    
    UFUNCTION(BlueprintCallable)
    AStasisPoint* FindStasisPointForAlien(AAlien* AlienToStase);
    
    UFUNCTION(BlueprintCallable)
    bool CanAlienAbduct(UObject* _RequestingAlien, UObject* _Target);
    
    UFUNCTION(BlueprintCallable)
    void AddAlienAbducting(UObject* _AlienAbducting);
    
};

