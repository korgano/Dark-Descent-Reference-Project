#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CollisionEnabledRequest.h"
#include "CustomMissionPhase.h"
#include "ETransportType.h"
#include "EnumMainObjectiveFailureConsequence.h"
#include "EnumMissionStatus.h"
#include "Event_GameplayAction_StringDelegate.h"
#include "Event_MissionDelegate.h"
#include "Event_Mission_AActorDelegate.h"
#include "Event_Mission_DataPadDelegate.h"
#include "Event_Mission_EnumMainObjectiveFailureConsequenceDelegate.h"
#include "Event_Mission_EnumMissionStatus_EnumMissionStatusDelegate.h"
#include "Event_Mission_FCustomMissionPhaseDelegate.h"
#include "Event_Mission_ObjectiveDelegate.h"
#include "Event_Mission_Objective_SubObjectiveComponent_ObjectiveRewardComponentDelegate.h"
#include "Event_Mission_Objective_boolDelegate.h"
#include "Event_Mission_TriggerInfoDelegate.h"
#include "StructDataPad.h"
#include "SubLevelConnectors.h"
#include "SubLevelID.h"
#include "Templates/SubclassOf.h"
#include "Weather.h"
#include "Mission.generated.h"

class AASFGameModeBase_TacticalMode;
class AASFPlayerState;
class AActorWithGameplayTag;
class AGameplayEvent;
class AMission;
class AObjective;
class ASquad;
class UCommonSaveLoadComponent;
class UDataPad_DataAsset;
class UGameplayAction;
class UHumanoidRespawnhandlerComponent;
class UPrimitiveComponent;
class UTriggerInfo;
class UWeatherManagerComponent;

UCLASS(Blueprintable)
class ASF_API AMission : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAutoCreateLeaveMissionObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHumanoidRespawnhandlerComponent* HumanoidRespawnhandler;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumMissionStatus MissionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> ActivatedObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonSaveLoadComponent* TacticalModeSaveLoadComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission OnMissionSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_EnumMainObjectiveFailureConsequence OnMissionFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_EnumMissionStatus_EnumMissionStatus OnMissionStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubLevelID EndMissionObjective_SubLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FWeather> Weathers;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_GameplayAction_String OnNamedGameplayActionBroadcasted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FCollisionEnabledRequest> ComponentSavedCollisions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumMainObjectiveFailureConsequence SquadDestructionConsequence;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsBlackFOWActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissionKeyObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDesaturateFOWActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DynamicSavedSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FString> SecurityCameraUnlockPerSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubLevelID> SubLevelWithSecurityCameraUnlockAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ActualNumRun;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> SucceedObjectivesDuringTheRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> RemainingMainObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> SucceededMainObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AObjective* FailedMainObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> RemainingSecondaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> SucceededSecondaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> FailedSecondaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> RemainingTertiaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> SucceededTertiaryObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AObjective*> FailedTertiaryObjectives;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective OnMissionObjectiveActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective OnMissionObjectiveDeactivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective OnGuiRequestedForObjective;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective_bool OnObjectiveFocusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective OnRefreshFocusObjectiveVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective_bool OnObjectiveHoveredChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective OnMissionObjectiveSucceeded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective OnMissionObjectiveFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective OnMissionObjectiveInvalidated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_Objective_SubObjectiveComponent_ObjectiveRewardComponent OnRewardGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataPad_DataAsset* IntroDataPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructDataPad> DataPadRecovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_DataPad OnObjectiveDataPadRecovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_DataPad OnDataPadRecovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_DataPad OnDataPadDisapear;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_DataPad OnDataPadFinishedRead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DataPadAppearTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DataPadDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DataPadDisplayTimeWhenWaitingAnotherPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataPad_DataAsset* CurrentlyDisplayedDataPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataPad_DataAsset*> PadWaitingToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGameplayEvent*> GameplayEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<AGameplayEvent*> ActiveGameplayEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGameplayEvent*> GameplayEventsToForceAtStart_Debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_TriggerInfo OnTriggerInfoTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_AActor OnTriggerPerceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTriggerInfo>, int32> TriggerClassListened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CharacterIDNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BuildingIDNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MissionCustomPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AvailableMission;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_FCustomMissionPhase OnCustomMissionPhaseStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Mission_FCustomMissionPhase OnCustomMissionPhaseEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<AGameplayEvent*> ActionToLaunchOnLoadWithCustomPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCustomMissionPhase> CurrentCustomMissionPhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETransportType, FSubLevelID> DefaultExtractionTransportsActiveSubLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeatherManagerComponent* WeatherManagerComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FocusObjectifPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubLevelConnectors> FocusObjectifConnectorPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSubLevelConnectors> SubLevelsConnectors;
    
public:
    AMission(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryReadDatapad_Internal(UDataPad_DataAsset* DataPad);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerTriggerInfo(UTriggerInfo* TriggerInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void Succeed();
    
    UFUNCTION(BlueprintCallable)
    void StartCustomPhase(const FCustomMissionPhase& CustomPhase);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMissionStatus(EnumMissionStatus _NewStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveTriggerListenerForSaving(TSubclassOf<UTriggerInfo> ClassToListen, UTriggerInfo* TriggerInfoToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTriggerListener(TSubclassOf<UTriggerInfo> ClassToListen);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMissionKeyObject(FGameplayTag MissionKeyTag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveConnector(AActorWithGameplayTag* _Connector, TArray<FName> _ConnectorConnections);
    
    UFUNCTION(BlueprintCallable)
    void RegisterObjective(AObjective* _Objective);
    
    UFUNCTION(BlueprintCallable)
    void RefreshFocusObjectiveVisibility();
    
    UFUNCTION(BlueprintCallable)
    void RecoverDataPad(UDataPad_DataAsset* DataPad, bool openDatapad);
    
    UFUNCTION(BlueprintCallable)
    void ReadDataPad(UDataPad_DataAsset* DataPad);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadDestroyed(ASquad* _Squad);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad);
    
    UFUNCTION(BlueprintCallable)
    void OnReturnToOtago(AASFGameModeBase_TacticalMode* _GameMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveSucceeded(AObjective* _Objective);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveInvalidated(AObjective* _Objective);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveFailed(AObjective* _Objective);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NamedGameplayActionBroadcasted(UGameplayAction* GA, const FString& GameplayActionName);
    
    UFUNCTION(BlueprintCallable)
    static void MergeMissions(AMission* MissionTarget, const TArray<AMission*>& MissionsToMerge);
    
    UFUNCTION(BlueprintCallable)
    void MarkDataPadAsRead(UDataPad_DataAsset* DataPad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRemainingObjectives() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsObjectiveActivated(AObjective* _Objective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCustomPhases(FCustomMissionPhase PhaseToCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMissionKeyObject(FGameplayTag MissionKeyTag) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasGameplayActionDialoguePlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetSucceedObjectivesDuringTheRun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetSucceededTertiaryObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetSucceededSecondaryObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetSucceededMainObjectives();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringFromTransportType(ETransportType Type) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumMissionStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumMainObjectiveFailureConsequence GetSquadDestructionConsequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSecurityCameraUnlockPerSubLevel(const FString& SubLevelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetRemainingTertiaryObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetRemainingSecondaryObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRemainingObjectives(TArray<AObjective*>& _Res) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetRemainingMainObjectives();
    
    UFUNCTION(BlueprintCallable)
    AObjective* GetObjectiveWithName(FName _Name);
    
    UFUNCTION(BlueprintCallable)
    AObjective* GetNextHoverableObjective(bool bForward, bool bShouldCicling);
    
    UFUNCTION(BlueprintCallable)
    AObjective* GetNextFocusableObjective(bool bForward);
    
protected:
    UFUNCTION(BlueprintCallable)
    AObjective* GetNextActiveTertiaryObjective();
    
    UFUNCTION(BlueprintCallable)
    AObjective* GetNextActiveSecondaryObjective();
    
public:
    UFUNCTION(BlueprintCallable)
    UHumanoidRespawnhandlerComponent* GetHumanoidRespawnHandler();
    
    UFUNCTION(BlueprintCallable)
    AObjective* GetHoveredObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameplayEvent* GetGameplayEventByName(const FString& GameplayActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetFocusObjectifPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSubLevelConnectors> GetFocusObjectifConnectorPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetFailedTertiaryObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetFailedSecondaryObjectives();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AObjective* GetFailedMainObjective();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllObjectives(TArray<AObjective*>& _Res);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AObjective*> GetActivatedObjectives();
    
    UFUNCTION(BlueprintCallable)
    void GenerateConnectorsPath(const TArray<FName>& _FocusObjectifPath, TArray<FSubLevelConnectors>& _OutFocusObjectifConnectorPath);
    
    UFUNCTION(BlueprintCallable)
    void GameplayEventEnded(AGameplayEvent* _GameplayEvent);
    
    UFUNCTION(BlueprintCallable)
    void GameplayEventActivated(AGameplayEvent* _GameplayEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishInitialize();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> FindPathsLeadingToFocusedObjective();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> FindPathsLeadingTo(FName From, FName To);
    
    UFUNCTION(BlueprintCallable)
    int32 FindDataPadStruct(UDataPad_DataAsset* DataPad);
    
    UFUNCTION(BlueprintCallable)
    void Fail(EnumMainObjectiveFailureConsequence _Consequence);
    
    UFUNCTION(BlueprintCallable)
    void EndOfDataPadDisplayTime();
    
    UFUNCTION(BlueprintCallable)
    void EndCustomPhase(const FCustomMissionPhase& CustomPhase);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateObjective(AObjective* _Objective);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastIsObjectiveActivated(AObjective* _Objective, bool _isActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ArchiveObjective(AObjective* _Objective, bool _bFailed);
    
public:
    UFUNCTION(BlueprintCallable)
    void AllowSecurityCameraUnlockPerSubLevel(const FString& SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void AddTriggerListenerForSaving(TSubclassOf<UTriggerInfo> ClassToListen, UTriggerInfo* TriggerInfoToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddTriggerListener(TSubclassOf<UTriggerInfo> ClassToListen);
    
    UFUNCTION(BlueprintCallable)
    void AddObjectiveToGUI(AObjective* _Objective);
    
    UFUNCTION(BlueprintCallable)
    void AddObjective(AObjective* _Objective);
    
    UFUNCTION(BlueprintCallable)
    void AddMissionKeyObject(FGameplayTag MissionKeyTag);
    
    UFUNCTION(BlueprintCallable)
    void AddConnector(AActorWithGameplayTag* _Connector, TArray<FName> _ConnectorConnections);
    
    UFUNCTION(BlueprintCallable)
    void ActivateObjective(AObjective* _Objective, bool _bAutoFocus);
    
};

