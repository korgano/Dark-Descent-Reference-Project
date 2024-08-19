#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ASFGameStateBase.h"
#include "BaseManagementEventDelegate.h"
#include "BaseManagementEvent_FGameplayTagDelegate.h"
#include "DataCarrierMarine.h"
#include "EGender.h"
#include "EMarineRank.h"
#include "ENewTurnNotificationType.h"
#include "Event_ASFMBGameState_HumanoidDelegate.h"
#include "Event_ASFMBGameState_Int32Delegate.h"
#include "Event_MarineSelectionClearedDelegate.h"
#include "Event_int32Delegate.h"
#include "MarineCustomizationPreset.h"
#include "MarineName.h"
#include "MissionStats.h"
#include "NewTurnEvents.h"
#include "NewTurnNotification.h"
#include "OtagoEvent.h"
#include "ResourceMission.h"
#include "ASFGameState_BaseManagement.generated.h"

class AASFGameModeBase_BaseManagement;
class AHumanoid;
class UBMStart_DataAsset;
class UBM_ResearchProject_DataAsset;
class UCampaignState_DataAsset;
class UDataTable;
class UInventoryResourceComponent;
class UMarineClassDataAssets;
class UOtagoEventSystem;
class UResourceMission_DataAsset;
class URoomService;
class UTrait_DataAsset;
class UTrauma_DataAsset;
class UUpgradeDataAssets;
class UXenoTech_DataAsset;

UCLASS(Blueprintable)
class ASF_API AASFGameState_BaseManagement : public AASFGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFMBGameState_Int32 OnCurrentTurnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnDeploymentDecreased;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 DeploymentsPerTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 DeploymentsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URoomService* RoomService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bFirstCommandDeckEntrance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* UpgradesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TraitsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MarineCustomizationPresetsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag LastLaunchedMissionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMissionStats> MissionsStats;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryResourceComponent* InventoryResourceComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> MissionSupplies;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_int32 OnMarineSelectedForMission;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_int32 OnMarineUnselectedForMission;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_MarineSelectionCleared OnClearedSelectedMarinesForMission;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFMBGameState_Humanoid OnBattlePreparationHoveredMarineChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AHumanoid*> Marines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoid*> MarinesSelectedForNextMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoid*> MarinesReturnedFromMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FDataCarrierMarine> DeadMarinesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, AHumanoid*> DeadMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* BattlePreparationHoveredMarine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FString> PickedMarineNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> PickedMarineCustomizationPresets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UTrauma_DataAsset*> AllTimeTraumas;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewTurnNotification> NewTurnNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewTurnEvents NewTurnEvents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShowPassUnfinishedTurnWarning;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_MarineSelectionCleared OnResourceMissionPerformed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FResourceMission> AvailableResourceMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FResourceMission> LastSpawnedResourceMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UXenoTech_DataAsset*> UnlockedXenoTechs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UXenoTech_DataAsset*> NewUnlockedXenoTechs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<UXenoTech_DataAsset*> SelectedXenoTechs;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFMBGameState_Int32 OnDeathClockUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentDeathClockTimeAllotment;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ASFMBGameState_Int32 OnInfestationStepUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentInfestationStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentHiveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShowInfestationEvent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent_FGameplayTag OnTutorialComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActiveTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOtagoEventSystem* OtagoEventSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OtagoEventsDataTable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCampaignState_DataAsset* CampaignStateDataAsset;
    
    AASFGameState_BaseManagement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateResourceMissions();
    
    UFUNCTION(BlueprintCallable)
    void TransferMissionSuppliesToShuttle(const TMap<FGameplayTag, int32>& _Supplies);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnResourceMission(UResourceMission_DataAsset* _MissionAsset);
    
public:
    UFUNCTION(BlueprintCallable)
    void SortNewTurnNotifications();
    
    UFUNCTION(BlueprintCallable)
    void SetXenoTechSelected(UXenoTech_DataAsset* _Asset, bool _Selected);
    
    UFUNCTION(BlueprintCallable)
    void SetShowInfestationEvent(bool _ShowEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetLastLaunchedMissionTag(FGameplayTag _MissionTag);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialRoomStates();
    
    UFUNCTION(BlueprintCallable)
    void SetBattlePreparationHoveredMarine(AHumanoid* HoveredMarine);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNewUnlockedXenoTech(UXenoTech_DataAsset* _Asset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMissionSuppliesAmount(FGameplayTag _SuppliesTag, int32 _NbResource);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMissionSupplies(const TMap<FGameplayTag, int32>& _Supplies);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMarineSelectedForMission(AHumanoid* _Humanoid);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMarine(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFirstActiveTutorial();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveTutorial(FGameplayTag _TutorialTag);
    
    UFUNCTION(BlueprintCallable)
    void RefreshMarinesRandomizedClassPicks();
    
    UFUNCTION(BlueprintCallable)
    void RecoverSuppliesAndResourcesFromShuttle();
    
    UFUNCTION(BlueprintCallable)
    void RecoverResearchProjectsFromShuttle();
    
    UFUNCTION(BlueprintCallable)
    void RecoverCiviliansFromShuttle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverAllMarineActors();
    
    UFUNCTION(BlueprintCallable)
    FMarineName PickMarineNameByGender(EGender _Gender);
    
    UFUNCTION(BlueprintCallable)
    FMarineName PickMarineName();
    
    UFUNCTION(BlueprintCallable)
    FMarineCustomizationPreset PickMarineCustomizationPresetByGender(EGender _Gender);
    
    UFUNCTION(BlueprintCallable)
    FMarineCustomizationPreset PickMarineCustomizationPreset();
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> PerformResourceMission(FResourceMission _Mission);
    
    UFUNCTION(BlueprintCallable)
    void OnXenoTechResearchProjectComplete(UBM_ResearchProject_DataAsset* _ProjectAsset);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialUnlocked(FGameplayTag _TutorialTag);
    
    UFUNCTION(BlueprintCallable)
    void OnNewTurn_Event(AASFGameModeBase_BaseManagement* _GameMode, int32 _Turn);
    
    UFUNCTION(BlueprintCallable)
    void InitializeRooms();
    
    UFUNCTION(BlueprintCallable)
    void InitializeInventory(UBMStart_DataAsset* BMStartDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMissionSupplies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMissionBriefPlayed(FGameplayTag _MissionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDeadMarines() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableUpgrade(AHumanoid* _Marine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableEmployees(FGameplayTag _EmployeeType, int32 _Count) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActiveTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveTutorial(FGameplayTag _TutorialTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUpgradeDataAssets*> GetUpgradesForMarineRank(EMarineRank _Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetUpgradesDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUpgradeDataAssets* GetUpgradeAsset(FGameplayTag _Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTrait_DataAsset*> GetUnusedTraits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUntreatedTraumatizedMarineCount(bool _WithWounded) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUntraumatizedMarineCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTraumatizedMarineCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTraitsDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTrait_DataAsset*> GetTraits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalMissionDuration(FGameplayTag _MissionTag, float _WithDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTiredMarineCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSupplies(TMap<FGameplayTag, int32>& _Supplies);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSelectedAndHoveredMarinesForNextMission(TArray<AHumanoid*>& _Marines) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URoomService* GetRoomService() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPromotableMarineCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOtagoEvent> GetOtagoEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOtagoEvent GetOtagoEvent(FGameplayTag _EventTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMarinesSelectedForNextMission(TArray<AHumanoid*>& _MarinesSelectedForNextMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMarinesReturnedFromMission(TArray<AHumanoid*>& _MarinesReturnedFromMission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarineCountSelectedForNextMissionByClass(UMarineClassDataAssets* _ClassDataAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarineCountByClass(const TArray<AHumanoid*>& _Marines, UMarineClassDataAssets* _ClassDataAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMarineCount() const;
    
    UFUNCTION(BlueprintCallable)
    AHumanoid* GetMarineByID(int32 _MarineID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHealthyMarineCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExhaustedMarineCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeploymentsLeft() const;
    
    UFUNCTION(BlueprintCallable)
    void GetDeadMarines(TArray<AHumanoid*>& _DeadMarines);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoid* GetBattlePreparationHoveredMarine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAverageRunDuration(float _WithDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAverageMissionsDuration(FGameplayTag _MissionTag, float _WithDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAverageBulletCount(int32 _WithCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUpgradeDataAssets*> GetAvailableUpgrades(const AHumanoid* _Marine, bool bCheckRequirements) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FResourceMission> GetAvailableResourceMissions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAvailableMarines(TArray<AHumanoid*>& _AvailableMarines) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableMarineCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableEmployees(FGameplayTag _EmployeeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUpgradeDataAssets*> GetAuthorizedUpgrades(const AHumanoid* _Marine) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AHumanoid*> GetAllMarinesWithClassFilterToExclude(UMarineClassDataAssets* DataAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllMarines(TArray<AHumanoid*>& _Marines) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AHumanoid*> GenerateDefaultSquadSelection();
    
    UFUNCTION(BlueprintCallable)
    void FlushNewTurnNotifications();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseDeploymentsLeft();
    
    UFUNCTION(BlueprintCallable)
    void CreateRoomService();
    
    UFUNCTION(BlueprintCallable)
    AHumanoid* CreateNewMarine();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectedXenoTechs(bool bRefund);
    
    UFUNCTION(BlueprintCallable)
    void ClearMarinesSelectedForMission();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDeploy() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyCampaignState(FGameplayTag _CurrentMissionTag);
    
    UFUNCTION(BlueprintCallable)
    void AddTurn();
    
    UFUNCTION(BlueprintCallable)
    void AddPickedMarineName(const FString& _Name);
    
    UFUNCTION(BlueprintCallable)
    void AddNewTurnNotification(ENewTurnNotificationType _Type, FText _Title, FText _Description);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionSuppliesAmount(FGameplayTag _SuppliesTag, int32 _NbSupplies);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionSupplies(const TMap<FGameplayTag, int32>& _Supplies);
    
    UFUNCTION(BlueprintCallable)
    void AddMarineSelectedForMission(AHumanoid* _Humanoid, int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void AddMarineReturnedFromMission(AHumanoid* _Humanoid);
    
    UFUNCTION(BlueprintCallable)
    void AddMarine(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable)
    void AddDeadMarine(UPARAM(Ref) FDataCarrierMarine& _DeadMarine);
    
};

