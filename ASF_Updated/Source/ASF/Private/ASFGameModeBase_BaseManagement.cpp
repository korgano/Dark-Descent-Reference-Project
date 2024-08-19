#include "ASFGameModeBase_BaseManagement.h"
#include "Components/AudioComponent.h"

AASFGameModeBase_BaseManagement::AASFGameModeBase_BaseManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelSaveGameInstance = NULL;
    this->BMGameState = NULL;
    this->BMStartDataAsset = NULL;
    this->AmbienceAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AmbienceAudioComponent"));
    this->AmbienceCues_DataAsset = NULL;
    this->CurrentAmbienceCue = NULL;
    this->RoomTransitionFadeDuration = 0.00f;
    this->RoomTransitionFadeHoldDuration = 0.00f;
    this->bRoomLevelLoaded = false;
    this->bLightingLevelLoaded = false;
    this->InfestationSystemAsset = NULL;
    this->OtagoRepairsAsset = NULL;
    this->ResourceMissionSystemAsset = NULL;
    this->SelectedEntryPoint = NULL;
    this->HoveredEntryPoint = NULL;
    this->bMissionEntryPointsLoaded = false;
    this->PrimaryObjectiveProgressWeight = 5.00f;
    this->SecondaryObjectiveProgressWeight = 2.00f;
    this->DatapadProgressWeight = 1.00f;
    this->bMissionLaunchSequencePlaying = false;
    this->bMissionReturn = false;
    this->InterludeDataAsset = NULL;
    this->InterludeSequenceActor = NULL;
    this->TutorialDataAsset = NULL;
    this->Steward = NULL;
}

void AASFGameModeBase_BaseManagement::UpdateMissionPlayedDialogues() {
}

void AASFGameModeBase_BaseManagement::UpdateMarineTraining(AHumanoid* _Marine) {
}

void AASFGameModeBase_BaseManagement::UpdateCurrentInfestation(int32 _Delta) {
}

void AASFGameModeBase_BaseManagement::UpdateCurrentDeathClockTimeAllotment(int32 _Delta) {
}

void AASFGameModeBase_BaseManagement::UnloadRoomAsync() {
}

void AASFGameModeBase_BaseManagement::UnloadRoom_Implementation(FGameplayTag _RoomTag) {
}

bool AASFGameModeBase_BaseManagement::TryPlayPendingInterlude() {
    return false;
}

void AASFGameModeBase_BaseManagement::StopCurrentInterlude() {
}

void AASFGameModeBase_BaseManagement::StartInterlude_Implementation() {
}

TArray<AHumanoid*> AASFGameModeBase_BaseManagement::SpawnMarinesReturningFromMission() {
    return TArray<AHumanoid*>();
}

TArray<AHumanoid*> AASFGameModeBase_BaseManagement::SpawnCiviliansReturningFromMission() {
    return TArray<AHumanoid*>();
}

void AASFGameModeBase_BaseManagement::SetSelectedMission(FName _MissionName) {
}

void AASFGameModeBase_BaseManagement::SetSelectedEntryPoint(AEntryPoint* _EntryPoint) {
}

void AASFGameModeBase_BaseManagement::SetHoveredEntryPoint(AEntryPoint* _EntryPoint) {
}

void AASFGameModeBase_BaseManagement::SendMarineToRoom_Implementation(AHumanoid* _Marine, FGameplayTag _RoomTag, FName _SlotName) {
}

void AASFGameModeBase_BaseManagement::SelectDefaultEntryPoint() {
}

bool AASFGameModeBase_BaseManagement::SaveMissionObjective(FName _MissionName, AObjective* _Objective) {
    return false;
}

void AASFGameModeBase_BaseManagement::SaveCampaignBeforeMissionLaunch(int32 _NbMaterialConsumed) {
}


void AASFGameModeBase_BaseManagement::RemovePendingInterlude(FGameplayTag _InterludeTag) {
}

void AASFGameModeBase_BaseManagement::PlayInterlude(FGameplayTag _InterludeTag) {
}

void AASFGameModeBase_BaseManagement::PassTurn() {
}

void AASFGameModeBase_BaseManagement::OnTutorialComplete(FGameplayTag _TutorialTag) {
}

void AASFGameModeBase_BaseManagement::OnSquadSelectionUnloadedCallback_Implementation() {
}

void AASFGameModeBase_BaseManagement::OnSquadSelectionLoadedCallback_Implementation() {
}

void AASFGameModeBase_BaseManagement::OnSeamlessTravelStart(UWorld* World, const FString& LevelName) {
}

void AASFGameModeBase_BaseManagement::OnSavesCompressedDuringObjectiveLoading(bool _Success) {
}

void AASFGameModeBase_BaseManagement::OnSaveCompressedAfterMissionReport(bool _bSuccess) {
}

void AASFGameModeBase_BaseManagement::OnRoomUnlocked(FGameplayTag _Tag) {
}

void AASFGameModeBase_BaseManagement::OnRoomUnloadedCallback_Implementation() {
}

void AASFGameModeBase_BaseManagement::OnRoomLoadedCallback_Implementation() {
}

void AASFGameModeBase_BaseManagement::OnRoomLightingLoadedCallback_Implementation() {
}

void AASFGameModeBase_BaseManagement::OnMovedInRoom_Implementation() {
}

void AASFGameModeBase_BaseManagement::OnMissionUnlocked(FGameplayTag _Tag) {
}

void AASFGameModeBase_BaseManagement::OnMissionLaunchStarted_Implementation() {
}

void AASFGameModeBase_BaseManagement::OnInterludeUnlocked(FGameplayTag _InterludeTag) {
}

void AASFGameModeBase_BaseManagement::OnInterludeRoomLoadedCallback_Implementation() {
}

void AASFGameModeBase_BaseManagement::OnFeatureUnlocked(FGameplayTag _Tag) {
}

void AASFGameModeBase_BaseManagement::OnCompressSaveGameBeforeLaunchFinished(bool Success) {
}

void AASFGameModeBase_BaseManagement::OnCameraFadedOut_Implementation() {
}

void AASFGameModeBase_BaseManagement::MoveOutRoom_Implementation() {
}

void AASFGameModeBase_BaseManagement::MoveInRoom_Implementation() {
}

void AASFGameModeBase_BaseManagement::LoadSelectedMissionEntryPoints() {
}

void AASFGameModeBase_BaseManagement::LoadRoom_Implementation(FGameplayTag _RoomTag, FName _CallbackFunction) {
}

void AASFGameModeBase_BaseManagement::LoadFacingTheBeast() {
}

void AASFGameModeBase_BaseManagement::LaunchMission(FGameplayTag _MissionTag) {
}

bool AASFGameModeBase_BaseManagement::IsRoomUnloading(FGameplayTag _RoomTag) const {
    return false;
}

bool AASFGameModeBase_BaseManagement::IsPlayingInterlude() const {
    return false;
}

bool AASFGameModeBase_BaseManagement::IsInMissionReport_Implementation() const {
    return false;
}

void AASFGameModeBase_BaseManagement::InitialMoveInRoom_Implementation() {
}

void AASFGameModeBase_BaseManagement::InitializeNewGamePlusMarines() {
}

void AASFGameModeBase_BaseManagement::InitializeMarines() {
}

void AASFGameModeBase_BaseManagement::IncMissionCount(FDataCarrierMarine& _Marine) {
}

bool AASFGameModeBase_BaseManagement::HasPendingInterludeInRoom(FGameplayTag _RoomTag) const {
    return false;
}

bool AASFGameModeBase_BaseManagement::HasPendingInterlude() const {
    return false;
}

void AASFGameModeBase_BaseManagement::GoToRoom_Implementation(FGameplayTag _RoomTag) {
}

TArray<UMarineClassDataAssets*> AASFGameModeBase_BaseManagement::GetTwoRandomMarineClasses(AHumanoid* _Marine) const {
    return TArray<UMarineClassDataAssets*>();
}

UTutorialDataAsset* AASFGameModeBase_BaseManagement::GetTutorialDataAsset() const {
    return NULL;
}

FTutorial AASFGameModeBase_BaseManagement::GetTutorial(FGameplayTag _TutorialTag) const {
    return FTutorial{};
}

FString AASFGameModeBase_BaseManagement::GetSubObjectiveSubLevel(const USubObjectiveComponent* _SubObjective) const {
    return TEXT("");
}

AEntryPoint* AASFGameModeBase_BaseManagement::GetSelectedMissionEntryPoint(const FString& _EntryPointName) const {
    return NULL;
}

TArray<AEntryPoint*> AASFGameModeBase_BaseManagement::GetSelectedMissionAvailableEntryPoints() const {
    return TArray<AEntryPoint*>();
}

USoundCue* AASFGameModeBase_BaseManagement::GetRoomAmbienceCue(FGameplayTag _RoomTag) const {
    return NULL;
}

UResourceMissionSystem_DataAsset* AASFGameModeBase_BaseManagement::GetResourceMissionSystemAsset() const {
    return NULL;
}

UMarineAttributeDataAssets* AASFGameModeBase_BaseManagement::GetRandomCommonPerkForMarine(AHumanoid* _Marine, const TArray<UMarineAttributeDataAssets*>& _IgnoreAttributes) {
    return NULL;
}

FInterlude AASFGameModeBase_BaseManagement::GetPendingRoomInterlude(FGameplayTag _RoomTag) const {
    return FInterlude{};
}

UOtagoRepairs_DataAsset* AASFGameModeBase_BaseManagement::GetOtagoRepairsAsset() const {
    return NULL;
}

float AASFGameModeBase_BaseManagement::GetMissionSuccessPercent(FGameplayTag _MissionTag) const {
    return 0.0f;
}

ULevelSaveGame* AASFGameModeBase_BaseManagement::GetMissionSaveForObjective(AObjective* _Objective) const {
    return NULL;
}

ULevelSaveGame* AASFGameModeBase_BaseManagement::GetMissionSave(FName _MissionName) const {
    return NULL;
}

FAcknowsSequenceList AASFGameModeBase_BaseManagement::GetMissionPlayedDialogues(FName _MissionName) const {
    return FAcknowsSequenceList{};
}

AObjective* AASFGameModeBase_BaseManagement::GetMissionObjective(FName _LevelName, FName _ObjectiveName) const {
    return NULL;
}

UInterludeDataAsset* AASFGameModeBase_BaseManagement::GetInterludeDataAsset() const {
    return NULL;
}

FInterlude AASFGameModeBase_BaseManagement::GetInterlude(FGameplayTag _InterludeTag) const {
    return FInterlude{};
}

UInfestationSystem_DataAsset* AASFGameModeBase_BaseManagement::GetInfestationSystemAsset() const {
    return NULL;
}

FInfestationStatus AASFGameModeBase_BaseManagement::GetInfestationStatus() const {
    return FInfestationStatus{};
}


AASFGameState_BaseManagement* AASFGameModeBase_BaseManagement::GetBMGameState() {
    return NULL;
}

TArray<UMarineAttributeDataAssets*> AASFGameModeBase_BaseManagement::GetAvailableCommonPerksForMarine(AHumanoid* _Marine) {
    return TArray<UMarineAttributeDataAssets*>();
}

void AASFGameModeBase_BaseManagement::FocusMissionReport_Implementation() {
}

void AASFGameModeBase_BaseManagement::FinishInterlude_Implementation() {
}

AHumanoid* AASFGameModeBase_BaseManagement::CreateMarine(const TSoftClassPtr<AHumanoid>& _MarineClass, FTransform _Transform, const FDataCarrierMarine& _MarineData) {
    return NULL;
}


bool AASFGameModeBase_BaseManagement::ComputeTrauma(AHumanoid* _Marine, EStressStep _StressStepMax) {
    return false;
}

int32 AASFGameModeBase_BaseManagement::ComputeGainedLevel(FDataCarrierMarine& _Marine) {
    return 0;
}

void AASFGameModeBase_BaseManagement::CompleteMissionReport_Implementation() {
}

void AASFGameModeBase_BaseManagement::ClearPendingInterludes() {
}

void AASFGameModeBase_BaseManagement::CheckMarineWounds(AHumanoid* _Marine) {
}

void AASFGameModeBase_BaseManagement::ChangeRoom_Implementation(FGameplayTag _RoomTag) {
}

void AASFGameModeBase_BaseManagement::BeforeLoadRoomAsyncStarted() {
}

UMarineAttributeDataAssets* AASFGameModeBase_BaseManagement::ApplyTiredOrExhaustedOnMarines(FDataCarrierMarine& _Marine) {
    return NULL;
}

void AASFGameModeBase_BaseManagement::AddRetrievedOtagoPart(FGameplayTag _Tag) {
}

void AASFGameModeBase_BaseManagement::AddPendingInterlude(FGameplayTag _InterludeTag) {
}


