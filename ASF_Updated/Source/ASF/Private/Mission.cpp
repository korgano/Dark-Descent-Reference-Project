#include "Mission.h"
#include "CommonSaveLoadComponent.h"
#include "Templates/SubclassOf.h"
#include "WeatherManagerComponent.h"

AMission::AMission(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldAutoCreateLeaveMissionObjective = true;
    this->HumanoidRespawnhandler = NULL;
    this->MissionStatus = EnumMissionStatus::UNINITIALIZED;
    this->TacticalModeSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("TacticalModeSaveLoadComponent"));
    this->SquadDestructionConsequence = EnumMainObjectiveFailureConsequence::RETRIABLE;
    this->bIsBlackFOWActive = true;
    this->bIsDesaturateFOWActive = true;
    this->ActualNumRun = 0;
    this->FailedMainObjective = NULL;
    this->IntroDataPad = NULL;
    this->DataPadDisplayTime = 15.00f;
    this->DataPadDisplayTimeWhenWaitingAnotherPad = 5.00f;
    this->CurrentlyDisplayedDataPad = NULL;
    this->bSkipStart = false;
    this->CharacterIDNames.AddDefaulted(5);
    this->WeatherManagerComponent = CreateDefaultSubobject<UWeatherManagerComponent>(TEXT("WeatherManagerComponent"));
}

void AMission::TryReadDatapad_Internal(UDataPad_DataAsset* DataPad) {
}

void AMission::TriggerTriggerInfo(UTriggerInfo* TriggerInfo) {
}

void AMission::Succeed() {
}

void AMission::StartCustomPhase(const FCustomMissionPhase& CustomPhase) {
}

void AMission::SetMissionStatus(EnumMissionStatus _NewStatus) {
}

void AMission::RemoveTriggerListenerForSaving(TSubclassOf<UTriggerInfo> ClassToListen, UTriggerInfo* TriggerInfoToRemove) {
}

void AMission::RemoveTriggerListener(TSubclassOf<UTriggerInfo> ClassToListen) {
}

void AMission::RemoveMissionKeyObject(FGameplayTag MissionKeyTag) {
}

void AMission::RemoveConnector(AActorWithGameplayTag* _Connector, TArray<FName> _ConnectorConnections) {
}

void AMission::RegisterObjective(AObjective* _Objective) {
}

void AMission::RefreshFocusObjectiveVisibility() {
}

void AMission::RecoverDataPad(UDataPad_DataAsset* DataPad, bool openDatapad) {
}

void AMission::ReadDataPad(UDataPad_DataAsset* DataPad) {
}

void AMission::OnSquadDestroyed(ASquad* _Squad) {
}

void AMission::OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad) {
}

void AMission::OnReturnToOtago(AASFGameModeBase_TacticalMode* _GameMode) {
}

void AMission::OnObjectiveSucceeded(AObjective* _Objective) {
}

void AMission::OnObjectiveInvalidated(AObjective* _Objective) {
}

void AMission::OnObjectiveFailed(AObjective* _Objective) {
}

void AMission::NamedGameplayActionBroadcasted_Implementation(UGameplayAction* GA, const FString& GameplayActionName) {
}

void AMission::MergeMissions(AMission* MissionTarget, const TArray<AMission*>& MissionsToMerge) {
}

void AMission::MarkDataPadAsRead(UDataPad_DataAsset* DataPad) {
}

bool AMission::IsRemainingObjectives() const {
    return false;
}

bool AMission::IsObjectiveActivated(AObjective* _Objective) {
    return false;
}

bool AMission::IsInitialized() const {
    return false;
}

bool AMission::IsInCustomPhases(FCustomMissionPhase PhaseToCheck) const {
    return false;
}

void AMission::Initialize_Implementation() {
}

bool AMission::HasMissionKeyObject(FGameplayTag MissionKeyTag) const {
    return false;
}

bool AMission::HasGameplayActionDialoguePlaying() {
    return false;
}

TArray<AObjective*> AMission::GetSucceedObjectivesDuringTheRun() {
    return TArray<AObjective*>();
}

TArray<AObjective*> AMission::GetSucceededTertiaryObjectives() {
    return TArray<AObjective*>();
}

TArray<AObjective*> AMission::GetSucceededSecondaryObjectives() {
    return TArray<AObjective*>();
}

TArray<AObjective*> AMission::GetSucceededMainObjectives() {
    return TArray<AObjective*>();
}

FString AMission::GetStringFromTransportType(ETransportType Type) const {
    return TEXT("");
}

EnumMissionStatus AMission::GetStatus() const {
    return EnumMissionStatus::UNINITIALIZED;
}

EnumMainObjectiveFailureConsequence AMission::GetSquadDestructionConsequence() {
    return EnumMainObjectiveFailureConsequence::RETRIABLE;
}

bool AMission::GetSecurityCameraUnlockPerSubLevel(const FString& SubLevelName) const {
    return false;
}

TArray<AObjective*> AMission::GetRemainingTertiaryObjectives() {
    return TArray<AObjective*>();
}

TArray<AObjective*> AMission::GetRemainingSecondaryObjectives() {
    return TArray<AObjective*>();
}

void AMission::GetRemainingObjectives(TArray<AObjective*>& _Res) const {
}

TArray<AObjective*> AMission::GetRemainingMainObjectives() {
    return TArray<AObjective*>();
}

AObjective* AMission::GetObjectiveWithName(FName _Name) {
    return NULL;
}

AObjective* AMission::GetNextHoverableObjective(bool bForward, bool bShouldCicling) {
    return NULL;
}

AObjective* AMission::GetNextFocusableObjective(bool bForward) {
    return NULL;
}

AObjective* AMission::GetNextActiveTertiaryObjective() {
    return NULL;
}

AObjective* AMission::GetNextActiveSecondaryObjective() {
    return NULL;
}

UHumanoidRespawnhandlerComponent* AMission::GetHumanoidRespawnHandler() {
    return NULL;
}

AObjective* AMission::GetHoveredObjective() {
    return NULL;
}

AGameplayEvent* AMission::GetGameplayEventByName(const FString& GameplayActionName) const {
    return NULL;
}

TArray<FName> AMission::GetFocusObjectifPath() const {
    return TArray<FName>();
}

TArray<FSubLevelConnectors> AMission::GetFocusObjectifConnectorPath() const {
    return TArray<FSubLevelConnectors>();
}

TArray<AObjective*> AMission::GetFailedTertiaryObjectives() {
    return TArray<AObjective*>();
}

TArray<AObjective*> AMission::GetFailedSecondaryObjectives() {
    return TArray<AObjective*>();
}

AObjective* AMission::GetFailedMainObjective() {
    return NULL;
}

void AMission::GetAllObjectives(TArray<AObjective*>& _Res) {
}

TArray<AObjective*> AMission::GetActivatedObjectives() {
    return TArray<AObjective*>();
}

void AMission::GenerateConnectorsPath(const TArray<FName>& _FocusObjectifPath, TArray<FSubLevelConnectors>& _OutFocusObjectifConnectorPath) {
}

void AMission::GameplayEventEnded(AGameplayEvent* _GameplayEvent) {
}

void AMission::GameplayEventActivated(AGameplayEvent* _GameplayEvent) {
}

void AMission::FinishInitialize_Implementation() {
}

TArray<FName> AMission::FindPathsLeadingToFocusedObjective() {
    return TArray<FName>();
}

TArray<FName> AMission::FindPathsLeadingTo(FName From, FName To) {
    return TArray<FName>();
}

int32 AMission::FindDataPadStruct(UDataPad_DataAsset* DataPad) {
    return 0;
}

void AMission::Fail(EnumMainObjectiveFailureConsequence _Consequence) {
}

void AMission::EndOfDataPadDisplayTime() {
}

void AMission::EndCustomPhase(const FCustomMissionPhase& CustomPhase) {
}

void AMission::DeactivateObjective(AObjective* _Objective) {
}

void AMission::BroadcastIsObjectiveActivated(AObjective* _Objective, bool _isActive) {
}

void AMission::ArchiveObjective(AObjective* _Objective, bool _bFailed) {
}

void AMission::AllowSecurityCameraUnlockPerSubLevel(const FString& SubLevelName) {
}

void AMission::AddTriggerListenerForSaving(TSubclassOf<UTriggerInfo> ClassToListen, UTriggerInfo* TriggerInfoToAdd) {
}

void AMission::AddTriggerListener(TSubclassOf<UTriggerInfo> ClassToListen) {
}

void AMission::AddObjectiveToGUI(AObjective* _Objective) {
}

void AMission::AddObjective(AObjective* _Objective) {
}

void AMission::AddMissionKeyObject(FGameplayTag MissionKeyTag) {
}

void AMission::AddConnector(AActorWithGameplayTag* _Connector, TArray<FName> _ConnectorConnections) {
}

void AMission::ActivateObjective(AObjective* _Objective, bool _bAutoFocus) {
}


