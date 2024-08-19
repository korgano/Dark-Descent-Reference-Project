#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActorWithGameplayTag.h"
#include "AmbushPointRegistrationDelegateDelegate.h"
#include "DifficultyParams.h"
#include "EnumSpawnPickRule.h"
#include "EventBroadcastParams.h"
#include "EventSystemDelegateDelegate.h"
#include "EventSystemSavedData.h"
#include "EventTriggerDelegateDelegate.h"
#include "Event_TMEventSystem_EventBroadcastParams_boolDelegate.h"
#include "FactionSystemicActivationDelegateDelegate.h"
#include "FactionSystemicInitializationDelegateDelegate.h"
#include "FactionSystemicPhaseChangesDelegateDelegate.h"
#include "HiveSizeChangesDelegateDelegate.h"
#include "HiveSizeParams.h"
#include "SavedActorInterface.h"
#include "ShelterLockStatChangesDelegateDelegate.h"
#include "SpawnPointRegistrationDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "TMEventSystem.generated.h"

class AASFGameModeBase_TacticalMode;
class AASFGameState_TacticalMode;
class AActor;
class AAmbushSpawnPoint;
class ARoomCluster;
class ASpawnPoint;
class ASubLevelHandler;
class ATMEventSystem;
class UAlienSystemic;
class UCommonSaveLoadComponent;
class UDarwinSystemic;
class UFactionSystemic;
class ULevelPrimaryDataAsset;
class UNarrativeFreezeGameplayAction;
class UNavigationQueryFilter;
class UObject;
class URest_DataAsset;
class USpawnPointDanger_DataAsset;
class USubLevelPrimaryDataAsset;
class UTMEvent;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;
class UWeylandSystemic;

UCLASS(Blueprintable)
class ASF_API ATMEventSystem : public AActorWithGameplayTag, public ISavedActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventSystemDelegate OnEventSystemInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventSystemDelegate OnSpawnPointUpdated_RoomCluster;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelPrimaryDataAsset* LevelDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CreateDefaultDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ULevelPrimaryDataAsset> DefaultLevelPDAClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyParams CurrentDifficultyParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* CommonSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FEventSystemSavedData SavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UFactionSystemic>> FactionSystemicSoftClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFactionSystemic*> FactionSystemics;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicInitializationDelegate OnFactionSystemicInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicActivationDelegate OnFactionSystemicActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicActivationDelegate OnFactionSystemicDeactivated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool HasRested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsResting;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShelterLockStatChangesDelegate OnShelterLockStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsInShelter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URest_DataAsset* RestDataAsset;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventSystemDelegate OnShelterActivationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventSystemDelegate OnRestStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventSystemDelegate OnRestEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SystemicPerPhaseMap;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionSystemicPhaseChangesDelegate OnPhaseDistributionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventTriggerDelegate OnTMEventTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_TMEventSystem_EventBroadcastParams_bool OnCustomEventTextRequested;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHiveSizeParams CurrentHiveSizeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumHiveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumHiveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnPoint*> NonSystemicSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASpawnPoint*> SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAmbushSpawnPoint*> NonSystemicAmbushPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAmbushSpawnPoint*> AmbushPoints;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointRegistrationDelegate OnSpawnPointRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointRegistrationDelegate OnSpawnPointUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointRegistrationDelegate OnNonSystemicSpawnPointRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointRegistrationDelegate OnNonSystemicSpawnPointUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbushPointRegistrationDelegate OnAmbushSpawnPointRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbushPointRegistrationDelegate OnAmbushSpawnPointUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbushPointRegistrationDelegate OnNonSystemicAmbushPointRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmbushPointRegistrationDelegate OnNonSystemicAmbushPointUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHiveSizeChangesDelegate OnHiveSizeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpawnPointDanger_DataAsset* SpawnPointDangerDataAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnPointReconstructed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnPointReconstructing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCurrentReconstructionValide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> NarrativeFreezeEffectClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* NarrativeFreezeEffect;
    
public:
    ATMEventSystem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterSpawnPoint(ASpawnPoint* _SpawnPoint);
    
    UFUNCTION(BlueprintCallable)
    bool TryForceRestPhase(bool ForceSucceedAmbush);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerTMEvent(UTMEvent* _Event);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartTransition();
    
    UFUNCTION(BlueprintCallable)
    void StartRest(bool TryAmbush, bool ForceSucceedAmbush);
    
    UFUNCTION(BlueprintCallable)
    void SetHiveSize(int32 _NewHiveSize);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResolveAndBroadcastShelterType(bool bForceBroadcast);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterSpawnPoint(ASpawnPoint* _SpawnPoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessTMEvent(UTMEvent* _Event);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemicPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSetOnGameMode(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnShelterLockChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnShelterEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnShelterDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterRebuilt(ARoomCluster* RoomCluster);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNavigationReconstructed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBlockTimeDilatation(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NarrativeFreezeStatusChanged(bool IsActive, UNarrativeFreezeGameplayAction* NarrativeFreezeGA);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShelterLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInShelter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyMarineOnCreep();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeTacticalMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnySystemicOnPhase(const FGameplayTagContainer& PhaseFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllSystemicsOnPhase(const FGameplayTagContainer& PhaseFilter) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleShelterEnabled();
    
    UFUNCTION(BlueprintCallable)
    void HandleShelterDisabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWeylandSystemic* GetWeylandSystemicWithoutContext(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeylandSystemic* GetWeylandSystemic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFactionSystemic* GetSystemicForFactionWithoutContext(UObject* WorldContextObject, const FGameplayTag& Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFactionSystemic* GetSystemicForFaction(const FGameplayTag& Faction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASpawnPoint*> GetSpawnPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpawnPointDanger_DataAsset* GetSpawnPointDangerDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASpawnPoint*> GetNonSystemicSpawnPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AAmbushSpawnPoint*> GetNonSystemicAmbushPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelPrimaryDataAsset* GetLevelDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHiveSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFactionSystemic*> GetFactionSystemics() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ATMEventSystem* GetEventSystemWithoutContext(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UTinda_EffectHandlerComponent* GetEffectHandlerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDifficultyParams GetDifficultyParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDarwinSystemic* GetDarwinSystemicWithoutContext(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDarwinSystemic* GetDarwinSystemic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USubLevelPrimaryDataAsset* GetCurrentSubLevelDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHiveSizeParams GetCurrentHiveSizeParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AASFGameState_TacticalMode* GetASFGameState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AASFGameModeBase_TacticalMode* GetASFGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AAmbushSpawnPoint*> GetAmbushSpawnPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASpawnPoint*> GetAllSpawnPoints(bool IncludeNonSystemicOnes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASpawnPoint*> GetAllAvailableSpawnPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAlienSystemic* GetAlienSystemicWithoutContext(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAlienSystemic* GetAlienSystemic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActivatedFactionSystemics(TArray<UFactionSystemic*>& OutActivatedSystemics) const;
    
    UFUNCTION(BlueprintCallable)
    bool ForceProcessTMEventWithTag(FGameplayTag _EventTag);
    
    UFUNCTION(BlueprintCallable)
    bool ForceProcessTMEventWithClass(const TSoftClassPtr<UTMEvent>& _EventClass);
    
    UFUNCTION(BlueprintCallable)
    ASpawnPoint* FindSpawnPointToSpawnFrom(const TArray<ASpawnPoint*>& _SpawnPoints, EnumSpawnPickRule _PickRule, AActor* _PathfindingContext, TSubclassOf<UNavigationQueryFilter> _FilterClass, bool RemoveSpawningSpawnPoints, const FString& ClassToSpawn);
    
    UFUNCTION(BlueprintCallable)
    void EndTransition();
    
    UFUNCTION(BlueprintCallable)
    void EndRest();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateSystemicForFaction(const FGameplayTag& Faction);
    
    UFUNCTION(BlueprintCallable)
    void CheckShelterPhaseBug();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRest() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastCustomEventTextToGUI(const FEventBroadcastParams& Params, bool bIsReward);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSystemicForFaction(const FGameplayTag& Faction);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool SavedActorInterface_IsInitialized() override PURE_VIRTUAL(SavedActorInterface_IsInitialized, return false;);
    
    UFUNCTION()
    void SavedActorInterface_BindOnInitialized() override PURE_VIRTUAL(SavedActorInterface_BindOnInitialized,);
    
};

