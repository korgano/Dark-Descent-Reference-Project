#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActorWithGameplayTag.h"
#include "Event_SpawnPointDelegate.h"
#include "Event_SpawnPoint_PawnDelegate.h"
#include "HighlightStateChangeDelegateDelegate.h"
#include "NavReconstructionTaskData.h"
#include "PathfindLocation.h"
#include "RevealStateChangeDelegateDelegate.h"
#include "SpawnDeferredDynamicDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "SpawnPoint.generated.h"

class AASFGameModeBase_TacticalMode;
class AASFPlayerState;
class AHumanoidMarine;
class APawn;
class ARoomCluster;
class ASquad;
class ASubLevelHandler;
class ATMEventSystem;
class UAIPointOfInterestComponent;
class UArrowComponent;
class UDataTable;
class URoomClusterFilter;
class URoomGraphPathPrecomputComponent;
class USaveLoadComponent;
class USceneComponent;
class USpawnPoint_AvailableEffect;
class USpawnPoint_CondemnedEffect;
class USpawnPoint_Esthetic_DataAsset;
class USpawnPoint_RevealedEffect;
class USpawnPoint_SpawningEffect;
class UStaticMeshComponent;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable)
class ASF_API ASpawnPoint : public AActorWithGameplayTag, public IPathfindLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTinda_EffectHandlerComponent* EffectHandler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoomClusterFilter> ShelterClusterFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URoomClusterFilter> CondemnClusterFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bRegisterToEventSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SpawnableFactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForbiddenPawnTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysDelayFirstSpawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsRevealed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Highlighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InfiniteHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle HighlightTimerHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRevealStateChangeDelegate OnRevealStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightStateChangeDelegate OnHighlightStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SpawnPoint_Pawn OnNewPawnSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SpawnPoint OnPawnWaveSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavReconstructionTaskData NavReconstructionTaskData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URoomGraphPathPrecomputComponent* RoomGraphPathPrecomputComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USpawnPoint_SpawningEffect> SpawningEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USpawnPoint_AvailableEffect> AvailableEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USpawnPoint_CondemnedEffect> CondemnedEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USpawnPoint_RevealedEffect> RevealedEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USaveLoadComponent* TacticalModeSaveLoadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SpawnHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DelayBetweenSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlienShouldPlaySpawnAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlienShouldOffsetSpawnPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> SpawnQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NavFilterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> CondemnAliveValidAccessibleMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidMarine*> CondemnAliveAccessibleMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SpawnArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* AnimArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* EvadeAnimationArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> VisibleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestComponent* PointOfInterestComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideArrowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideArrowSpawn;
    
    ASpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateEsthetic(USpawnPoint_Esthetic_DataAsset* _DataAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCondemnState();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateClusterStates();
    
    UFUNCTION(BlueprintCallable)
    void Unlight();
    
    UFUNCTION(BlueprintCallable)
    void UnCondemn();
    
    UFUNCTION(BlueprintCallable)
    bool StartQueueSpawn(bool _bSkipFirstDelay, FVector2D _SpawnDelay);
    
    UFUNCTION(BlueprintCallable)
    APawn* StartPawnSpawnProcess(const TSoftClassPtr<APawn>& _PawnClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APawn* SpawnPawnFromClass(TSubclassOf<APawn> PawnClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDelayBetweenSpawns(FVector2D _NewDelay);
    
    UFUNCTION(BlueprintCallable)
    void Reveal();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReconstructCondemnState();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReconstructClusterStates();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadStarted(ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberRemoved(ASquad* _Squad, AHumanoidMarine* _RemovedMember);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberEnabled(ASquad* _Squad, AHumanoidMarine* _EnabledMember);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadMemberDisabled(ASquad* _Squad, AHumanoidMarine* _DisabledMember);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnRoomClusterRebuilt(ARoomCluster* RoomCluster);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEventSystemSetOnGameMode(AASFGameModeBase_TacticalMode* _GameMode, ATMEventSystem* _EventSystem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInactive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHighlighted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCondemned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintCallable)
    void Highlight(float HighlightDuration);
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenRevealed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleUnlight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleReveal();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandlePawnSpawn(APawn* SpawnedPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHighlight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSpawnType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USpawnPoint_Esthetic_DataAsset* GetSpawnPoint_Esthetic_DataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetSpawnDepartureTransformForPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetSpawnDepartureTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetSpawnArrivalTransformForPawn(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetSpawnArrivalTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetSpawnableFactions() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetRoomGraphID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPathfindLocation_Implementation() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetPathFindingPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetInteractionLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInactiveCondemnedDebugString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFactionOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEvadeAnimPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDelayBetweenSpawns();
    
    UFUNCTION(BlueprintCallable)
    void Condemn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearSpawnQueue();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnPawnOfType(const FGameplayTag& PawnType) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSpawnNewPawn(const TSoftClassPtr<APawn>& PawnToSpawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnForFactions(const TArray<FGameplayTag>& Factions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnForFaction(const FGameplayTag& Faction) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelQueueSpawn(bool _bClearSpawnQueue);
    
    UFUNCTION(BlueprintCallable)
    void AddPawnsToSpawnQueue(const TArray<TSoftClassPtr<APawn>>& _FoeClass, bool _bOverrideCurrentQueue, bool _bStartQueueSpawn, FVector2D _SpawnDelay);
    
    UFUNCTION(BlueprintCallable)
    void AddPawnsToDeferredSpawnQueue(const TArray<TSoftClassPtr<APawn>>& _FoeClass, FSpawnDeferredDynamicDelegate DeferredSpawnEvent, bool _bOverrideCurrentQueue, bool _bStartQueueSpawn, FVector2D _SpawnDelay);
    

    // Fix for true pure virtual functions not being implemented
};

