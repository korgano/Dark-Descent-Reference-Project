#include "AdaptiveMusicPlayer.h"
#include "CommonSaveLoadComponent.h"

AAdaptiveMusicPlayer::AAdaptiveMusicPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommonSaveLoadComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("CommonSaveLoadComponent"));
    this->bAdaptiveModeEnabled = true;
    this->BuildUpPlayer = NULL;
    this->PlayerConfig = NULL;
    this->DataAsset = NULL;
    this->CurrentPhase = EMusicPhase::None;
    this->CurrentBuildUpParamValue = 0.00f;
    this->MassiveOnslaught = NULL;
}

void AAdaptiveMusicPlayer::UpdateDetectionBuildUp(float _Param) {
}

void AAdaptiveMusicPlayer::SwitchPhase(EMusicPhase _Phase, bool _Force) {
}

void AAdaptiveMusicPlayer::StopNarrativeMusic() {
}

void AAdaptiveMusicPlayer::StopMassiveOnslaughtBuildUp() {
}

void AAdaptiveMusicPlayer::StopDetectionBuildUp() {
}

void AAdaptiveMusicPlayer::Stop() {
}

void AAdaptiveMusicPlayer::StartMassiveOnslaughtBuildUp(float _Duration) {
}

void AAdaptiveMusicPlayer::StartDetectionBuildUp(FGameplayTag _Faction) {
}

void AAdaptiveMusicPlayer::SetMusicParameterValue(UASFAudioComponent* _MusicPlayer, FName _Param, float _Value) {
}

void AAdaptiveMusicPlayer::SetAdaptiveModeEnabled(bool _Enabled) {
}

void AAdaptiveMusicPlayer::Resume() {
}

void AAdaptiveMusicPlayer::RemoveActiveEnemyTargetingComponent(UEnnemyTargetingComponent* _TargetingComp) {
}

void AAdaptiveMusicPlayer::PlayNarrativeMusic() {
}

void AAdaptiveMusicPlayer::Play() {
}

void AAdaptiveMusicPlayer::Pause() {
}

void AAdaptiveMusicPlayer::OnTrackingSystemUpdated(UTrackingSystemComponent* _TrackingSystemComponent) {
}

void AAdaptiveMusicPlayer::OnSystemicPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void AAdaptiveMusicPlayer::OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic) {
}

void AAdaptiveMusicPlayer::OnSubLevelLoaded(ASubLevelHandler* _Handler, const FString& _SubLevelName) {
}

void AAdaptiveMusicPlayer::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void AAdaptiveMusicPlayer::OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad) {
}

void AAdaptiveMusicPlayer::OnPauseChanged(AASFPlayerController* _Controller, bool _bPaused) {
}

void AAdaptiveMusicPlayer::OnMusicPlayerChangedState(UAudioComponent* _MusicPlayer) {
}

void AAdaptiveMusicPlayer::OnMusicPlaybackPercent(const UAudioComponent* _AudioComp, const USoundWave* _SoundWave, const float _PlaybackPercent) {
}

void AAdaptiveMusicPlayer::OnMusicPlaybackFinished(UASFAudioComponent* _MusicPlayer) {
}

void AAdaptiveMusicPlayer::OnMissionLoaded(AASFGameModeBase_TacticalMode* _GameMode) {
}

void AAdaptiveMusicPlayer::OnMassiveOnslaughtStateChanged(UTinda_EffectHandlerComponent* EffectHandler, FGameplayTag Effect, bool bAdded) {
}

void AAdaptiveMusicPlayer::OnGameSpeedChanged(AASFPlayerController* _Controller, float _Speed) {
}

void AAdaptiveMusicPlayer::OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem) {
}

bool AAdaptiveMusicPlayer::IsPlayingNarrativeMusic() const {
    return false;
}

bool AAdaptiveMusicPlayer::IsMassiveOnslaughtBuildUpPending() const {
    return false;
}

void AAdaptiveMusicPlayer::InitFromSubLevel(const FString& _SubLevelName) {
}

void AAdaptiveMusicPlayer::Init(UEnvironmentMusicDataAsset* _DataAsset) {
}

UASFAudioComponent* AAdaptiveMusicPlayer::GetCurrentPhasePlayer() const {
    return NULL;
}

FMusicPhaseConfig AAdaptiveMusicPlayer::GetCurrentPhaseConfig() const {
    return FMusicPhaseConfig{};
}

void AAdaptiveMusicPlayer::AddActiveEnemyTargetingComponent(UEnnemyTargetingComponent* _TargetingComp) {
}


