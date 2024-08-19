#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ASFGameModeBase.h"
#include "AcknowsSequenceList.h"
#include "BaseManagementEventDelegate.h"
#include "BaseManagementEvent_FGameplayTagDelegate.h"
#include "DataCarrierMarine.h"
#include "EStressStep.h"
#include "Event_BMGameModeDelegate.h"
#include "Event_BMGameMode_Int32Delegate.h"
#include "InfestationStatus.h"
#include "Interlude.h"
#include "SavedActorInterface.h"
#include "Tutorial.h"
#include "ASFGameModeBase_BaseManagement.generated.h"

class AASFGameState_BaseManagement;
class AEntryPoint;
class AHumanoid;
class ALevelSequenceActor;
class AObjective;
class UAudioComponent;
class UBMStart_DataAsset;
class UBM_AmbienceCues_DataAsset;
class UInfestationSystem_DataAsset;
class UInterludeDataAsset;
class ULevelSaveGame;
class ULevelSaveGameInstanceSubsystem;
class UMarineAttributeDataAssets;
class UMarineClassDataAssets;
class UOtagoRepairs_DataAsset;
class UResourceMissionSystem_DataAsset;
class USoundCue;
class USubObjectiveComponent;
class UTutorialDataAsset;
class UWorld;

UCLASS(Blueprintable, NonTransient)
class ASF_API AASFGameModeBase_BaseManagement : public AASFGameModeBase, public ISavedActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoid*> DeadMarinesFromMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoid*> CiviliansFromMission;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_BMGameMode OnCampaignLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_BMGameMode_Int32 OnNewTurn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_BMGameMode_Int32 OnNewTurnEventComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveGameInstanceSubsystem* LevelSaveGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFGameState_BaseManagement* BMGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBMStart_DataAsset* BMStartDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AmbienceAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBM_AmbienceCues_DataAsset* AmbienceCues_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CurrentAmbienceCue;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent_FGameplayTag OnRoomChangeRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent_FGameplayTag OnLeavingRoom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent_FGameplayTag OnEnteredRoom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnRoomChangeCameraFadedOut;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FName> RoomLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartingRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LastRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NextRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoomTransitionFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoomTransitionFadeHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRoomLevelLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLightingLevelLoaded;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnDeathClockDeadlineReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInfestationSystem_DataAsset* InfestationSystemAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOtagoRepairs_DataAsset* OtagoRepairsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceMissionSystem_DataAsset* ResourceMissionSystemAsset;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnEntryPointSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnEntryPointHoverChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelSaveGame*> MissionSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectedMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEntryPoint*> SelectedMissionEntryPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEntryPoint* SelectedEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEntryPoint* HoveredEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionEntryPointsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnLoadedMissionEntryPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FAcknowsSequenceList> MissionPlayedDialogues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimaryObjectiveProgressWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondaryObjectiveProgressWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DatapadProgressWeight;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnLoadedSquadSelection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnUnloadedSquadSelection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnLoadedMissionLaunch;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnMissionLaunchSequenceFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionLaunchLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionLaunchSequencePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionReturn;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnInterludeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnInterludeFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseManagementEvent OnPendingInterludeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterludeDataAsset* InterludeDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* InterludeSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PendingInterludes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentInterlude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LastPlayedInterlude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHumanoid*> BoundInterludeMarines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialDataAsset* TutorialDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* Steward;
    
public:
    AASFGameModeBase_BaseManagement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMissionPlayedDialogues();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMarineTraining(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentInfestation(int32 _Delta);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentDeathClockTimeAllotment(int32 _Delta);
    
    UFUNCTION(BlueprintCallable)
    void UnloadRoomAsync();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnloadRoom(FGameplayTag _RoomTag);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TryPlayPendingInterlude();
    
    UFUNCTION(BlueprintCallable)
    void StopCurrentInterlude();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartInterlude();
    
    UFUNCTION(BlueprintCallable)
    TArray<AHumanoid*> SpawnMarinesReturningFromMission();
    
    UFUNCTION(BlueprintCallable)
    TArray<AHumanoid*> SpawnCiviliansReturningFromMission();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMission(FName _MissionName);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedEntryPoint(AEntryPoint* _EntryPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetHoveredEntryPoint(AEntryPoint* _EntryPoint);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SendMarineToRoom(AHumanoid* _Marine, FGameplayTag _RoomTag, FName _SlotName);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectDefaultEntryPoint();
    
    UFUNCTION(BlueprintCallable)
    bool SaveMissionObjective(FName _MissionName, AObjective* _Objective);
    
    UFUNCTION(BlueprintCallable)
    void SaveCampaignBeforeMissionLaunch(int32 _NbMaterialConsumed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestMissionReport();
    
    UFUNCTION(BlueprintCallable)
    void RemovePendingInterlude(FGameplayTag _InterludeTag);
    
    UFUNCTION(BlueprintCallable)
    void PlayInterlude(FGameplayTag _InterludeTag);
    
    UFUNCTION(BlueprintCallable)
    void PassTurn();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialComplete(FGameplayTag _TutorialTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSquadSelectionUnloadedCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSquadSelectionLoadedCallback();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSeamlessTravelStart(UWorld* World, const FString& LevelName);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSavesCompressedDuringObjectiveLoading(bool _Success);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSaveCompressedAfterMissionReport(bool _bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnRoomUnlocked(FGameplayTag _Tag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoomUnloadedCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoomLoadedCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRoomLightingLoadedCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMovedInRoom();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMissionUnlocked(FGameplayTag _Tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMissionLaunchStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnInterludeUnlocked(FGameplayTag _InterludeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInterludeRoomLoadedCallback();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFeatureUnlocked(FGameplayTag _Tag);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCompressSaveGameBeforeLaunchFinished(bool Success);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCameraFadedOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveOutRoom();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveInRoom();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadSelectedMissionEntryPoints();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadRoom(FGameplayTag _RoomTag, FName _CallbackFunction);
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadFacingTheBeast();
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchMission(FGameplayTag _MissionTag);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoomUnloading(FGameplayTag _RoomTag) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingInterlude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsInMissionReport() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitialMoveInRoom();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeNewGamePlusMarines();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMarines();
    
    UFUNCTION(BlueprintCallable)
    void IncMissionCount(UPARAM(Ref) FDataCarrierMarine& _Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingInterludeInRoom(FGameplayTag _RoomTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingInterlude() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoToRoom(FGameplayTag _RoomTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineClassDataAssets*> GetTwoRandomMarineClasses(AHumanoid* _Marine) const;
    
    UFUNCTION(BlueprintCallable)
    UTutorialDataAsset* GetTutorialDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTutorial GetTutorial(FGameplayTag _TutorialTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSubObjectiveSubLevel(const USubObjectiveComponent* _SubObjective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEntryPoint* GetSelectedMissionEntryPoint(const FString& _EntryPointName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AEntryPoint*> GetSelectedMissionAvailableEntryPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetRoomAmbienceCue(FGameplayTag _RoomTag) const;
    
    UFUNCTION(BlueprintCallable)
    UResourceMissionSystem_DataAsset* GetResourceMissionSystemAsset() const;
    
    UFUNCTION(BlueprintCallable)
    UMarineAttributeDataAssets* GetRandomCommonPerkForMarine(AHumanoid* _Marine, const TArray<UMarineAttributeDataAssets*>& _IgnoreAttributes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInterlude GetPendingRoomInterlude(FGameplayTag _RoomTag) const;
    
    UFUNCTION(BlueprintCallable)
    UOtagoRepairs_DataAsset* GetOtagoRepairsAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionSuccessPercent(FGameplayTag _MissionTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSaveGame* GetMissionSaveForObjective(AObjective* _Objective) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSaveGame* GetMissionSave(FName _MissionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAcknowsSequenceList GetMissionPlayedDialogues(FName _MissionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AObjective* GetMissionObjective(FName _LevelName, FName _ObjectiveName) const;
    
    UFUNCTION(BlueprintCallable)
    UInterludeDataAsset* GetInterludeDataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInterlude GetInterlude(FGameplayTag _InterludeTag) const;
    
    UFUNCTION(BlueprintCallable)
    UInfestationSystem_DataAsset* GetInfestationSystemAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInfestationStatus GetInfestationStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetDefaultAcknowSpeakerID() const;
    
    UFUNCTION(BlueprintCallable)
    AASFGameState_BaseManagement* GetBMGameState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMarineAttributeDataAssets*> GetAvailableCommonPerksForMarine(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FocusMissionReport();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishInterlude();
    
    UFUNCTION(BlueprintCallable)
    AHumanoid* CreateMarine(const TSoftClassPtr<AHumanoid>& _MarineClass, FTransform _Transform, const FDataCarrierMarine& _MarineData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AHumanoid* CreateBMMarine(FDataCarrierMarine _MarineData);
    
    UFUNCTION(BlueprintCallable)
    bool ComputeTrauma(AHumanoid* _Marine, EStressStep _StressStepMax);
    
    UFUNCTION(BlueprintCallable)
    int32 ComputeGainedLevel(UPARAM(Ref) FDataCarrierMarine& _Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompleteMissionReport();
    
    UFUNCTION(BlueprintCallable)
    void ClearPendingInterludes();
    
    UFUNCTION(BlueprintCallable)
    void CheckMarineWounds(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeRoom(FGameplayTag _RoomTag);
    
    UFUNCTION(BlueprintCallable)
    void BeforeLoadRoomAsyncStarted();
    
    UFUNCTION(BlueprintCallable)
    UMarineAttributeDataAssets* ApplyTiredOrExhaustedOnMarines(UPARAM(Ref) FDataCarrierMarine& _Marine);
    
    UFUNCTION(BlueprintCallable)
    void AddRetrievedOtagoPart(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddPendingInterlude(FGameplayTag _InterludeTag);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool SavedActorInterface_IsInitialized() override PURE_VIRTUAL(SavedActorInterface_IsInitialized, return false;);
    
    UFUNCTION()
    void SavedActorInterface_BindOnInitialized() override PURE_VIRTUAL(SavedActorInterface_BindOnInitialized,);
    
};

