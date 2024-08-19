#include "ASFGameModeBase_TacticalMode.h"
#include "NavUpdaterManagerComponent.h"

AASFGameModeBase_TacticalMode::AASFGameModeBase_TacticalMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MissionState = EnumMissionState::PAUSED;
    this->bHasAlreadyCallFinishBeginPlay = false;
    this->bHasAlreadyCallFinishBeginPlay_AfterIntro = false;
    this->EventSystem = NULL;
    this->ensureTMEventGetLevelDataAsset = true;
    this->bIsIndoor = true;
    this->IndoorWeatherEffectChain = NULL;
    this->PlayerChooseToStayInGame = false;
    this->FogOfWar = NULL;
    this->InfluenceMapManager = NULL;
    this->POIPerception_GameMode = NULL;
    this->NavigationManager = CreateDefaultSubobject<UNavUpdaterManagerComponent>(TEXT("NavUpdaterManagerComponent"));
    this->SubLevelHandler = NULL;
    this->AdaptiveMusicPlayer = NULL;
    this->AdaptiveMusicPlayerDataAsset = NULL;
    this->LevelScriptActor = NULL;
    this->bMissionHasBeenLoaded = false;
    this->TimerFadeOut = 1.00f;
    this->DetectionTimeMultiplier = 1.00f;
    this->Widget_EndMission = NULL;
}

void AASFGameModeBase_TacticalMode::ValidateLoading() {
}

void AASFGameModeBase_TacticalMode::UpdateMissionProgress(FGameplayTag _MissionTag) const {
}

void AASFGameModeBase_TacticalMode::UpdateDisplayEndGameGui() {
}

void AASFGameModeBase_TacticalMode::UpdateBuildingsDelayed() {
}

void AASFGameModeBase_TacticalMode::UpdateBuildingFade(UObject* Building, bool bNeedFade) {
}

void AASFGameModeBase_TacticalMode::UnRegisterLDSTActorForRoofFading(const FString& Building, FEvent_ASFGameModeBase_FString_Bool DelegateFade) {
}

void AASFGameModeBase_TacticalMode::UnregisterGuardPath(AAIGuardPath* _GuardPath) {
}

void AASFGameModeBase_TacticalMode::StartSquad_Implementation() {
}

void AASFGameModeBase_TacticalMode::SpawnMarines_Implementation() {
}

void AASFGameModeBase_TacticalMode::SetMissionState(EnumMissionState _MissionState) {
}

void AASFGameModeBase_TacticalMode::SetLevelScriptActor(AASFLevelScriptActor* _LevelScriptActor) {
}

void AASFGameModeBase_TacticalMode::SetIsInDoor(bool bNewInDoor) {
}

void AASFGameModeBase_TacticalMode::SetInfluenceMapManager(AInfluenceMapManager* _InfluenceMapManager) {
}

void AASFGameModeBase_TacticalMode::SetFOWManager(AFOWRevertedManagerActor* FogOfWarManager) {
}

void AASFGameModeBase_TacticalMode::ReturnToOtago() {
}

void AASFGameModeBase_TacticalMode::RegisterLDSTActorForRoofFading(const FString& Building, FEvent_ASFGameModeBase_FString_Bool DelegateFade) {
}

void AASFGameModeBase_TacticalMode::RegisterGuardPath(AAIGuardPath* _GuardPath) {
}

void AASFGameModeBase_TacticalMode::OnSubLevelUnload(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AASFGameModeBase_TacticalMode::OnOtagoSavesUncompressed(bool _Success) {
}

void AASFGameModeBase_TacticalMode::OnMissionSucceeded_Implementation(AMission* _Mission) {
}

void AASFGameModeBase_TacticalMode::OnMissionOutroFinished_Implementation() {
}

void AASFGameModeBase_TacticalMode::OnMissionIntroFinished_Implementation() {
}

void AASFGameModeBase_TacticalMode::OnMissionFailed_Implementation(AMission* _Mission, EnumMainObjectiveFailureConsequence _FailureConsequence) {
}

void AASFGameModeBase_TacticalMode::OnMenuPauseOpeningChanged(AASFPlayerController* Controller, bool bOpen) {
}

void AASFGameModeBase_TacticalMode::OnMemberRemoved(ASquad* Squad, AHumanoidMarine* Character) {
}

void AASFGameModeBase_TacticalMode::OnFOWManagerDeleted(AFOWRevertedManagerActor* FogOfWarManager) {
}

void AASFGameModeBase_TacticalMode::OnFirstSubLevelLoaded(ASubLevelHandler* _Handler, const FString& _SubLevelName) {
}

void AASFGameModeBase_TacticalMode::OnFirstAlienEncountered_Implementation(AAlien* _Alien) {
}

void AASFGameModeBase_TacticalMode::LaunchMissionOutro_Implementation(const FString& _MissionOutroMediaUrl) {
}

void AASFGameModeBase_TacticalMode::LaunchMissionIntro_Implementation(const FString& _MissionIntroMediaUrl) {
}

bool AASFGameModeBase_TacticalMode::IsMissionLoaded() const {
    return false;
}

bool AASFGameModeBase_TacticalMode::IsLoadedRun() {
    return false;
}

bool AASFGameModeBase_TacticalMode::IsIndoor() const {
    return false;
}

void AASFGameModeBase_TacticalMode::InitRespawnHandler_Implementation() {
}

void AASFGameModeBase_TacticalMode::InitInventory_Implementation() {
}

UPOIPerception_GameMode* AASFGameModeBase_TacticalMode::GetPOIPerception_GameMode() const {
    return NULL;
}

FString AASFGameModeBase_TacticalMode::GetMissionOutroMediaUrl() {
    return TEXT("");
}

FString AASFGameModeBase_TacticalMode::GetMissionIntroMediaUrl() {
    return TEXT("");
}

TArray<AHumanoid*> AASFGameModeBase_TacticalMode::GetMemberReadyToLeave() {
    return TArray<AHumanoid*>();
}

AASFLevelScriptActor* AASFGameModeBase_TacticalMode::GetLevelScriptActor() const {
    return NULL;
}

TArray<FString> AASFGameModeBase_TacticalMode::GetFadedBuilding() const {
    return TArray<FString>();
}

ATMEventSystem* AASFGameModeBase_TacticalMode::GetEventSystem() const {
    return NULL;
}

void AASFGameModeBase_TacticalMode::FinishBeginPlay_AfterIntro() {
}

void AASFGameModeBase_TacticalMode::EnableInfluencedPath(bool isInfluenced) {
}

void AASFGameModeBase_TacticalMode::DoFadeOutAfterTimer(const FString& Building) {
}

void AASFGameModeBase_TacticalMode::DisplayEndGameGui_Implementation(bool _Open) {
}

void AASFGameModeBase_TacticalMode::CreateSplitScreenManager_Implementation() {
}

void AASFGameModeBase_TacticalMode::CreateNarrativeSubtitleUI_Implementation() {
}

AHumanoidMarine* AASFGameModeBase_TacticalMode::CreateMarine(const TSoftClassPtr<AHumanoid>& _MarineClass, FTransform _Transform, const FDataCarrierMarine& _MarineData, int32 _SquadID) {
    return NULL;
}

void AASFGameModeBase_TacticalMode::CreateLoadingScreen_Implementation() {
}

AHumanoid* AASFGameModeBase_TacticalMode::CreateHumanoid(const TSoftClassPtr<AHumanoid>& _HumanoidClass, FTransform _Transform, const FHumanoidCreationDelegate& DefferedDelegate) {
    return NULL;
}

void AASFGameModeBase_TacticalMode::BindToEventSystem_Implementation() {
}

void AASFGameModeBase_TacticalMode::BeforeFinishFirstLoad_Implementation() {
}


