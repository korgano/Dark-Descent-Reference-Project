#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AggressivenessChangedDelegateDelegate.h"
#include "AggressivenessParams.h"
#include "EnumSquadStatus.h"
#include "FactionSystemicActivationStateChangesDelegateDelegate.h"
#include "FactionSystemicDelegateDelegate.h"
#include "FactionSystemicLockStateChangesDelegateDelegate.h"
#include "FactionSystemicSpawnPointDelegateDelegate.h"
#include "PhaseChangedDelegateDelegate.h"
#include "SpawnTimeFrameFillDelegateDelegate.h"
#include "SpawnWaveKeyFrame.h"
#include "SystemicData.h"
#include "SystemicSavedData.h"
#include "FactionSystemic.generated.h"

class AASFGameState_TacticalMode;
class AAmbushSpawnPoint;
class APawn;
class ASpawnPoint;
class ASquad;
class ATMEventSystem;
class UEnnemyTrackingComponent;
class ULevelPrimaryDataAsset;
class USubLevelPrimaryDataAsset;
class USystemicDataAsset;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API UFactionSystemic : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicActivationStateChangesDelegate OnActivationStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATMEventSystem* EventSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelPrimaryDataAsset* LevelDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USystemicDataAsset* SystemicDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemicData SystemicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemicSavedData SavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentPhase;
    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: StartPhaseDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty StartPhaseDelegates./Script/ASF.FactionSystemic:StartPhaseDelegates'

    
    // UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    // Missed Property: EndPhaseDelegates
    // FunctionSignature is nullptr, cannot deduce function for 'DelegateProperty EndPhaseDelegates./Script/ASF.FactionSystemic:EndPhaseDelegates'

    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhaseChangedDelegate OnPhaseChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PreRestPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PreTransitionPhase;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicDelegate OnSystemicInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAggressiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumAggressiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAggressivenessParams CurrentAggressivenessParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AggressivenessTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggressivenessTimerStartTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicLockStateChangesDelegate OnAggressivenessLockStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAggressivenessChangedDelegate OnAggressivenessChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicDelegate OnAggressivenessIncrementationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicDelegate OnAggressivenessIncrementationStopped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnPoint*> SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnWaveKeyFrame> SpawnWaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASpawnPoint> PredeterminedSpawnPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicLockStateChangesDelegate OnSpawnLockStateChanged;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnTimeFrameFillDelegate OnSpawnTimeFrameRefilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicDelegate OnSpawnTimeFrameStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicSpawnPointDelegate OnPredeterminedSpawnPointChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAmbushSpawnPoint*> AmbushSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASquad* InternalPlayerSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFGameState_TacticalMode* InternalGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AmbushProximityCheckTimerHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicLockStateChangesDelegate OnAmbushLockStateChanged;
    
    UFactionSystemic();

protected:
    UFUNCTION(BlueprintCallable)
    void UnpauseAggressivenessIncrementation();
    
    UFUNCTION(BlueprintCallable)
    void StopAggressivenessIncrementation();
    
    UFUNCTION(BlueprintCallable)
    void StartTransition_(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartShelter_Trapped(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartShelter_Tracked(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartShelter_Spotted(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartShelter_Defense(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartShelter_Covert(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartRest_(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartEncounter_Tracked(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartEncounter_Spotted(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartEncounter_Defense(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartEncounter_Covert(const FGameplayTag& PreviousPhase);
    
    UFUNCTION(BlueprintCallable)
    void StartAggressivenessIncrementation(bool _bRestartIfRunning, bool _bStartSpawnTimers);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SpawnOnPointWithBudget(ASpawnPoint* SpawnPoint, int32 Budget);
    
    UFUNCTION(BlueprintCallable)
    void SetSquadStatus(EnumSquadStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetPredeterminedSpawnPoint(ASpawnPoint* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetPhase(const FGameplayTag& _NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetAggressiveness(int32 _NewAggressiveness, const FString& _MovementReason);
    
    UFUNCTION(BlueprintCallable)
    void SafelyDisableDefense();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PauseAggressivenessIncrementation();
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnTimerExpired(const FSpawnWaveKeyFrame& SpawnWave);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnPointUnregisteredFromEventSystem(ATMEventSystem* InEventSystem, ASpawnPoint* SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnPointRegisteredOnEventSystem(ATMEventSystem* InEventSystem, ASpawnPoint* SpawnPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPhaseChanged_Internal(const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFoeDeferredSpawned(ASpawnPoint* SpawnPoint, UObject* FoeObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEmptyAmbushLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAmbushSpawnPointUnregisteredFromEventSystem(ATMEventSystem* InEventSystem, AAmbushSpawnPoint* AmbushSpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnAmbushSpawnPointRegisteredOnEventSystem(ATMEventSystem* InEventSystem, AAmbushSpawnPoint* AmbushSpawnPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAmbushLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAggressivenessTimerExpired();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAggressivenessLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAmbushLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAggressivenessLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Initialize();
    
public:
    UFUNCTION(BlueprintCallable)
    void IncreaseAggressiveness(int32 _IncreaseAmount, const FString& _MovementReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleSpawnLockStateChanged(bool IsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDeactivation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAggressivenessChanged(int32 OldAggressiveness);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleActivation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector2D GetWavesNumberBounds(int32 SpawnPool) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetTimeFrameSpawnPool() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USystemicDataAsset* GetSystemicDataAsset() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSystemicData GetSystemicData_Internal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSystemicData GetSystemicData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EnumSquadStatus GetSquadStatusForPhase(const FGameplayTag& PhaseTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSpawnWaveKeyFrame> GetSpawnWaves() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASpawnPoint*> GetSpawnPointsOfType(const FGameplayTagContainer& SpawnType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASpawnPoint*> GetSpawnPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSavedElapsedTrackTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASpawnPoint* GetPredeterminedSpawnPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumAggressiveness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnnemyTrackingComponent* GetLinkedTrackingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelPrimaryDataAsset* GetLevelDataAsset() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFoeGroupClassesWithBudget(int32 _Budget, TArray<TSoftClassPtr<APawn>>& OutFoeGroupClasses);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATMEventSystem* GetEventSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USubLevelPrimaryDataAsset* GetCurrentSubLevelDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumSquadStatus GetCurrentSquadStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAggressivenessParams GetCurrentAggressivenessParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAggressiveness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AAmbushSpawnPoint*> GetAmbushSpawnPoints() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetAggressivenessTimerPercent(bool ZeroIfPaused);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimerHandle GetAggressivenessTimerHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAggressivenessIncrementationTotalDelay() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndTransition_(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndShelter_Trapped(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndShelter_Tracked(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndShelter_Spotted(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndShelter_Defense(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndShelter_Covert(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndRest_(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndEncounter_Tracked(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndEncounter_Spotted(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndEncounter_Defense(const FGameplayTag& IncomingPhase);
    
    UFUNCTION(BlueprintCallable)
    void EndEncounter_Covert(const FGameplayTag& IncomingPhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void DecreaseAggressiveness(int32 _DecreaseAmount, const FString& _MovementReason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ComputeAmbushProximityCheck();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ChangeSquadStatusForPhase(FGameplayTag& Phase, EnumSquadStatus NewStatus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddDeltaToAggressivenessTimer(float DeltaTime);
    
};

