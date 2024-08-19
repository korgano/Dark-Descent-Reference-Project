#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ASFGameStateBase.h"
#include "AcknowsSequence.h"
#include "DamageResultStruct.h"
#include "DataCarrierCivilian.h"
#include "DataCarrierMarine.h"
#include "Event_AHumanoidTactical_BoolDelegate.h"
#include "Event_ASFGameStateDelegate.h"
#include "Event_ASFGameState_AAlien_boolDelegate.h"
#include "Event_ASFGameState_ACharacter_boolDelegate.h"
#include "Event_ASFGameState_FGameplayTagDelegate.h"
#include "Event_ASFGameState_FGameplayTag_IntDelegate.h"
#include "Event_ASFGameState_MissionDelegate.h"
#include "Event_ASFGameState_SearchCoverCompleteDelegate.h"
#include "Event_ASFGameState_TrackingSystemDelegate.h"
#include "Event_ASquad_BoolDelegate.h"
#include "Event_OnGamePerceptionUpdatedDelegate.h"
#include "ExtractionTransportActiveSubLevelDelegateDelegate.h"
#include "ExtractionTransportRegistrationDelegateDelegate.h"
#include "GameCheat.h"
#include "ItemSpawnedRegistrationDelegateDelegate.h"
#include "MissionEndedInfosStruct.h"
#include "MissionProgress.h"
#include "MissionStats.h"
#include "PowerLoaderRegistrationDelegateDelegate.h"
#include "ASFGameState_TacticalMode.generated.h"

class AASFCharacter;
class AASFGameModeBase_TacticalMode;
class AActor;
class AAlien;
class AEntryPoint;
class AEscapeZone;
class AExtractionTransport;
class AHideout;
class AHumanoidCivilian;
class AHumanoidTactical;
class AItemSpawned;
class ALift;
class AMission;
class ANest;
class APowerLoaderActor;
class ARoomCluster;
class ASplineRoad_ExitPoint;
class ASquad;
class ASubLevelHandler;
class UAIPointOfInterestConfig;
class UAIPointOfInterestContainer;
class UEggPoolComponent;
class UEnemyTracking_DataAsset;
class UEnnemyTrackingComponent;
class UEnnemyTrackingSystem;
class UMaterialInstanceDynamic;
class UPOIDefaultContainer;
class UPOIRoomContainer;
class UPointOfInterest_DataAsset;
class UXenoTech_DataAsset;

UCLASS(Blueprintable)
class ASF_API AASFGameState_TacticalMode : public AASFGameStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMission* CurrentMission;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState_Mission OnMissionRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState_Mission OnLeaveMission;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANest*> Nests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEggPoolComponent* EggPoolComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoidCivilian*> Civilians;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AHumanoidTactical_Bool OnCivilianListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASquad_Bool OnSquadListChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AASFCharacter*> CharactersVisibleInMap;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState_AAlien_bool OnAlienVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState_ACharacter_bool OnCharacterVisibilityChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEscapeZone*> EscapeZonesInMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHideout*> HideoutsInMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameCheat GameCheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAlien* EvadingAlien;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NextBossID;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MTMinimapShader;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, AExtractionTransport*> ExtractionTransports;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ActiveExtractionTransportsSubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExtractionTransport* ActualExtractionTransport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HiddingPoints;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExtractionTransport* ExtractionDropship;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> APC_Supplies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FDataCarrierMarine> ExtractionTransports_MarineStock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FDataCarrierCivilian> ExtractionTransports_CivilianStock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AHumanoidTactical_Bool OnSecureHumanoid;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtractionTransportRegistrationDelegate OnExtractionTransportRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtractionTransportActiveSubLevelDelegate OnActiveSubLevelForExtractionTransportTypeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEntryPoint*> APC_WayPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineRoad_ExitPoint* APC_ExitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, APowerLoaderActor*> PowerLoaders;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPowerLoaderRegistrationDelegate OnPowerLoaderRegistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALift*> LiftsPool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState_FGameplayTag OnTutorialEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState_FGameplayTag_Int OnTutorialStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ActiveTutorialsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AItemSpawned*> SpawnedItems;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSpawnedRegistrationDelegate OnItemSpawnedRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState OnPOIContainerBuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UPOIRoomContainer*> Room_POIContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UPOIDefaultContainer*> PoolDynamicPoiContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_OnGamePerceptionUpdated OnPerceptionAddedToGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_OnGamePerceptionUpdated OnPerceptionRemovedFromGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState_TrackingSystem OnTrackingSystemRegistered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UEnnemyTrackingSystem*> TrackedFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UEnnemyTrackingComponent*> TrackingComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, ASquad*> Squads;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NextSquadID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UXenoTech_DataAsset*> SelectedXenoTechs;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState_SearchCoverComplete SearchCoverComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RoomCoverBusy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFGameState_FGameplayTag OnResearchProjectBlueprintAdded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMissionProgress MissionProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMissionStats> MissionStats;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* POIDebugActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMissionEndedInfosStruct MissionEndStruct;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    double TimeInMission;
    
    AASFGameState_TacticalMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterPowerLoader(APowerLoaderActor* _PowerLoader);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterItemSpawned(AItemSpawned* _ItemSpawned);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCharacterFromVisibilityList(AASFCharacter* _Char);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterIDNameForBoss(AAlien* Boss);
    
    UFUNCTION(BlueprintCallable)
    void SetActualExtractionTransport(AExtractionTransport* _ActualExtractionTransport);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveSubLevelForExtractionTransportType(const FString& Type, const FString& SubLevel);
    
    UFUNCTION(BlueprintCallable)
    void SearchCoverInRoomComplete(int32 _Id);
    
    UFUNCTION(BlueprintCallable)
    void SaveSecuredHumanoidsToGameInstanceSS();
    
    UFUNCTION(BlueprintCallable)
    void SaveMarineAndGoToOtago(bool ReturnToOtago, float delayBeforeReturnToOtago, bool _bFromGA);
    
    UFUNCTION(BlueprintCallable)
    void SaveHumanoidInAPC(AHumanoidTactical* _Humanoid);
    
    UFUNCTION(BlueprintCallable)
    void SaveExtractionTransportEntryPoint(const FString& _PointName);
    
    UFUNCTION(BlueprintCallable)
    bool ReserveSearchCoverInRoom(int32 _Id);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrackingEnemy(FGameplayTag _TrackedFaction, AASFCharacter* _TrackingEnemy, FGameplayTag _TrackingType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSquad(ASquad* _Squad, int32 _SquadID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRoomPOIContainer(int32 RoomId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNest(ANest* _Nest);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHideoutInMap(AHideout* _HideoutInMap);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHiddingPoint_Deserter(AActor* _HiddingPoint);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEscapeZoneInMap(AEscapeZone* _EscapeZoneInMap);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCivilian(AHumanoidCivilian* Civilian);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAPC_Waypoint(AEntryPoint* _Waypoint);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveTutorial(FGameplayTag _TutorialTag);
    
    UFUNCTION(BlueprintCallable)
    UEnnemyTrackingSystem* RegisterTrackedSystem(FGameplayTag _TrackedFaction, const TSoftClassPtr<UEnnemyTrackingSystem>& _TrackingSystemClass, UEnemyTracking_DataAsset* _TrackingComponentDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPowerLoader(APowerLoaderActor* _PowerLoader);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMission(AMission* _Mission);
    
    UFUNCTION(BlueprintCallable)
    void RegisterItemSpawned(AItemSpawned* _ItemSpawned);
    
    UFUNCTION(BlueprintCallable)
    void RegisterExtractionTransport(const FString& Name, AExtractionTransport* _ExtractionTransport);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCharacterToVisibilityList(AASFCharacter* _NewChar);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* _GameMode, ASubLevelHandler* _SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void OnRoomAdded(ARoomCluster* _RoomCluster, int32 _RoomID);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnPerceptionEnable(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnPerceptionDisable(UAIPointOfInterestContainer* _AIPointOfInterestContainer, UAIPointOfInterestConfig* _PointOfInterestConfig);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCivilianDeath(AASFCharacter* _ActorKilled, const FDamageResultStruct& _DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterVisibilityChanged_Delegate(AActor* _Owner, bool Visibility);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginSubLevelUnload(ASubLevelHandler* _SubLevelHandler, const FString& _SubLevel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoomContainerBuilt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExtractionTransportTypeActiveOnSubLevel(const FString& Type, const FString& SubLevel) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAtLeastAValidMarinesExtracted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveTutorial(FGameplayTag _TutorialTag) const;
    
    UFUNCTION(BlueprintCallable)
    void IncShotBullets();
    
    UFUNCTION(BlueprintCallable)
    bool HasEnemyOnSight(UPointOfInterest_DataAsset* POISightDataAsset);
    
    UFUNCTION(BlueprintCallable)
    UEnnemyTrackingComponent* GetTrackingComponent(FGameplayTag _TrackedFaction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnnemyTrackingSystem* GetTrackedSystem(FGameplayTag _TrackedFaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSubLevelOfActiveExtractionTransportOfType(const FString& Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<int32, ASquad*> GetSquads();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASquad* GetSquadByIDName(const FString& IdName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAIPointOfInterestContainer*> GetRoomPOIContainerForGID(int32 _GraphID, bool EntranceContainers, bool GenerateContainers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAIPointOfInterestContainer*> GetRoomPOIContainerAtLocation(FVector _WorldLocation, bool EntranceContainers, bool GenerateContainers);
    
    UFUNCTION(BlueprintCallable)
    APowerLoaderActor* GetPowerLoaderById(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    TArray<ANest*> GetNests();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHideout*> GetHideoutsInMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetHiddingPoint_Deserter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetExtractionTransportsInventorySupplies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetExtractionTransportsInventoryRessources();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AExtractionTransport* GetExtractionTransportByName(const FString& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AEscapeZone*> GetEscapeZonesInMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEggPoolComponent* GetEggPool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPOIDefaultContainer* GetDynamicPOIContainer(FGameplayTag _ContainerTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMission* GetCurrentMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoidCivilian*> GetCivilians() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AASFCharacter*> GetCharactersVisibleInMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AASFCharacter* GetCharacterByIDName(const FString& IdName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHideout*> GetAvailableHideoutsInMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, UEnnemyTrackingComponent*> GetAllTrackingFactionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AExtractionTransport* GetActualExtractionTransport() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AExtractionTransport* GetActiveExtractionTransportByName(const FString& Name) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EndSaveMarineAndGoToOtago();
    
public:
    UFUNCTION(BlueprintCallable)
    void DismissMissionBrief();
    
    UFUNCTION(BlueprintCallable)
    void ClearUnlockedResearchProjects();
    
    UFUNCTION(BlueprintCallable)
    void ClearOtagoFeaturesToUnlock();
    
    UFUNCTION(BlueprintCallable)
    void ClearMissionProgress();
    
    UFUNCTION(BlueprintCallable)
    void BuildRoomPOIContainer(ARoomCluster* _RoomCluster);
    
    UFUNCTION(BlueprintCallable)
    void AddUnlockedResearchProject(FGameplayTag _ProjectTag);
    
    UFUNCTION(BlueprintCallable)
    bool AddTrackingEnemy(FGameplayTag _TrackedFaction, AASFCharacter* _TrackingEnemy, AASFCharacter* _Target, FGameplayTag _TrackingType, bool _Force);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSquad(ASquad* _Squad, int32 _SquadID);
    
    UFUNCTION(BlueprintCallable)
    void AddSelectedXenoTechs(TArray<UXenoTech_DataAsset*> _XenoTechs);
    
    UFUNCTION(BlueprintCallable)
    void AddRecoveredMaterials(FGameplayTag _MissionTag, int32 _Materials);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayedDialogue(FAcknowsSequence _Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void AddOtagoFeaturesToUnlock(const FGameplayTagContainer _Features);
    
    UFUNCTION(BlueprintCallable)
    void AddNest(ANest* _Nest);
    
    UFUNCTION(BlueprintCallable)
    void AddKilledEnemy(FGameplayTag _EnemyTag);
    
    UFUNCTION(BlueprintCallable)
    void AddHideoutInMap(AHideout* _HideoutInMap);
    
    UFUNCTION(BlueprintCallable)
    void AddHiddingPoint_Deserter(AActor* _HiddingPoint);
    
    UFUNCTION(BlueprintCallable)
    void AddExtractionTransportsInventorySupplies(FGameplayTag supplie, int32 quantity);
    
    UFUNCTION(BlueprintCallable)
    void AddEscapeZoneInMap(AEscapeZone* _EscapeZoneInMap);
    
    UFUNCTION(BlueprintCallable)
    void AddDeadCivilian(FDataCarrierCivilian _CivilianData);
    
    UFUNCTION(BlueprintCallable)
    void AddCivilian(AHumanoidCivilian* Civilian);
    
    UFUNCTION(BlueprintCallable)
    void AddAPC_Waypoint(AEntryPoint* _Waypoint);
    
    UFUNCTION(BlueprintCallable)
    void AddActiveTutorial(FGameplayTag _TutorialTag);
    
};

