#include "AcknowsManagerComponent.h"

UAcknowsManagerComponent::UAcknowsManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeOutDuration = 1.00f;
    this->ConcurrencySettings = NULL;
    this->RadioVoiceEffectChain = NULL;
    this->RadioVoiceSwitchPlaybackPercentLimit = 0.95f;
    this->SelectionAcknowsAsset = NULL;
    this->ReactionAcknowsAsset = NULL;
    this->PhaseSwitchAcknowsAsset = NULL;
    this->EnemyContactAcknowsAsset = NULL;
    this->SituationAcknowsAsset = NULL;
    this->MaxActiveAcknowsCount = 2;
    this->DamagePercentMedium = 0.20f;
    this->DamagePercentHigh = 0.40f;
    this->NewBleepInactivityDuration = 10.00f;
    this->MoreBleepInactivityDuration = 10.00f;
    this->IdleTimerDuration = 10.00f;
    this->LastPlayedAcknow = NULL;
    this->bAcknowsManagerIsActive = true;
    this->bIdleAcknowsIsActive = true;
    this->bNarrativeDialogueOnly = false;
    this->bForceNarrativeDialogueOnly = false;
    this->DialoguePlaybackMode = EDialoguePlaybackMode::FULL;
}

void UAcknowsManagerComponent::UpdateSpeakerOnScreen(int32 _SpeakerID) {
}

void UAcknowsManagerComponent::UnbindFromPlaybackFinished(UAcknow_DataAsset* _AcknowAsset, FDynDelegate_AcknowsManager_PDA_int32 _Delegate) {
}

void UAcknowsManagerComponent::TryPlayTaggedAcknowVariants(const FTaggedAcknowVariants& _TaggedVariants, int32 _WaitForSpeakerID, bool _bBypassAbleToSpeakQuery) {
}

void UAcknowsManagerComponent::TryPlayAcknowVariants(int32 _SpeakerID, const FAcknowVariants& _AcknowVariants, int32 _WaitForSpeakerID, bool _bBypassAbleToSpeakQuery, bool bAsyncLoading) {
}

void UAcknowsManagerComponent::StartIdleTimer() {
}

void UAcknowsManagerComponent::ShowSpeechFeedback(AActor* _Actor) {
}

bool UAcknowsManagerComponent::ShouldSpeakerBeInterruptedBy(int32 _SpeakerID, UAcknow_DataAsset* _NewAcknow) const {
    return false;
}

void UAcknowsManagerComponent::SetSubtitleText(const FText& _Text) {
}

void UAcknowsManagerComponent::SetRadioVoiceEffectEnabled(int32 _SpeakerID, bool _bEnabled) {
}

void UAcknowsManagerComponent::SetNarrativeDialogueOnly(bool _DialogueOnly) {
}

void UAcknowsManagerComponent::SetIdleAcknowsActivation(bool _NewActive) {
}

void UAcknowsManagerComponent::SetForceNarrativeDialogueOnly(bool _DialogueOnly) {
}

void UAcknowsManagerComponent::SetAcknowsManagerActivation(bool _bNewActive) {
}

void UAcknowsManagerComponent::RetriggerCurrentSubtitle() {
}

void UAcknowsManagerComponent::RestartNarrativeDialogues() {
}

void UAcknowsManagerComponent::ResetIdleTimer() {
}

void UAcknowsManagerComponent::RemovePendingAcknow(int32 _WaitForSpeakerID, UAcknow_DataAsset* _WaitForAsset) {
}

void UAcknowsManagerComponent::RemoveActiveAcknow(int32 _SpeakerID) {
}

void UAcknowsManagerComponent::RemoveAcknowSpeaker(AHumanoid* _Humanoid) {
}

void UAcknowsManagerComponent::ProcessSubtitleQueue() {
}

void UAcknowsManagerComponent::PlayNarrativeDialogue(FAcknowsSequence _NarrativeDialogue) {
}

void UAcknowsManagerComponent::OnVoiceComponentPauseChanged(AASFPlayerController* _PlayerController, bool _bPause) {
}

void UAcknowsManagerComponent::OnUserSettingChanged(FGameplayTag _SettingTag, bool _Value) {
}

void UAcknowsManagerComponent::OnTrackingSystemUpdated(UTrackingSystemComponent* _TrackingSystemComponent) {
}

void UAcknowsManagerComponent::OnSystemicActivatedOnEventSystem(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic) {
}

void UAcknowsManagerComponent::OnSubtitleManagerSetText(FText _Text) {
}

void UAcknowsManagerComponent::OnSquadInactivityTimerTriggered(ASquad* _Squad) {
}

void UAcknowsManagerComponent::OnSquadCreated(AASFPlayerState* _PlayerState, ASquad* _Squad) {
}

void UAcknowsManagerComponent::OnSpeakerStateChanged(UTinda_EffectHandlerComponent* _EffectHandler, FGameplayTag _Effect, bool _bAdded) {
}

void UAcknowsManagerComponent::OnSpeakerStartedReloadingEmptyWeapon(AHumanoid* _Humanoid, AWeapon* _Weapon) {
}

void UAcknowsManagerComponent::OnSpeakerReceivedWound(AActor* _ActorWounded, const FDamageResultStruct& _Damage) {
}

void UAcknowsManagerComponent::OnSpeakerReceivedDamage(AActor* _ActorWounded, const FDamageResultStruct& _Damage) {
}

void UAcknowsManagerComponent::OnSpeakerKilledEnemy(AHumanoid* _Humanoid, AASFCharacter* _Enemy) {
}

void UAcknowsManagerComponent::OnSpeakerFiredWeapon(AHumanoid* _Humanoid, AWeapon* _Weapon) {
}

void UAcknowsManagerComponent::OnMissionLoaded(AASFGameModeBase_TacticalMode* _GameMode) {
}

void UAcknowsManagerComponent::OnIdleTimerTriggered() {
}

void UAcknowsManagerComponent::OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem) {
}

void UAcknowsManagerComponent::OnEnemySpeakerStartedReloading(AHumanoid* _Humanoid, AWeapon* _Weapon) {
}

void UAcknowsManagerComponent::OnEnemySpeakerReceivedDamage(AActor* _ActorWounded, const FDamageResultStruct& _Damage) {
}

void UAcknowsManagerComponent::OnCinematicModeActivationChanged(AASFPlayerController* _PlayerController, bool _bActive) {
}

void UAcknowsManagerComponent::OnCharacterVisibilityChanged(AASFGameState_TacticalMode* _TacticalMode, AASFCharacter* _Character, bool _bVisible) {
}

void UAcknowsManagerComponent::OnBossSpawned(UAlienSystemic* _AlienSystemic, const FBossData& _BossData, bool _IsRespawn) {
}

void UAcknowsManagerComponent::OnAlienPhaseChanged(UFactionSystemic* FactionSystemic, const FGameplayTag& OldPhase, const FGameplayTag& NewPhase) {
}

void UAcknowsManagerComponent::OnAcknowPlaybackPercent(const UAudioComponent* _AudioComp, const USoundWave* _SoundWave, const float _PlaybackPercent) {
}

void UAcknowsManagerComponent::OnAcknowPlaybackFinished(int32 _SpeakerID) {
}

bool UAcknowsManagerComponent::IsSpeakerActive(int32 _SpeakerID) const {
    return false;
}

bool UAcknowsManagerComponent::IsPlayingNarrativeDialogue() const {
    return false;
}

bool UAcknowsManagerComponent::IsPartOfNarrativeDialogue(UAcknow_DataAsset* _Asset) const {
    return false;
}

bool UAcknowsManagerComponent::IsNarrativeDialoguePlaying(const FAcknowsSequence& _Dialogue) const {
    return false;
}

bool UAcknowsManagerComponent::IsAcknowCoolingDown(const FAcknowVariants& _AcknowVariants) {
    return false;
}

void UAcknowsManagerComponent::InterruptAllAcknows() {
}

void UAcknowsManagerComponent::InterruptActiveAcknow(int32 _SpeakerID) {
}

void UAcknowsManagerComponent::HideSpeechFeedback(AActor* _Actor) {
}

FAcknowVariants UAcknowsManagerComponent::GetWoundAcknow(const FDamageResultStruct& _Damage) {
    return FAcknowVariants{};
}

UAudioComponent* UAcknowsManagerComponent::GetVoiceComponent(int32 _SpeakerID) const {
    return NULL;
}

int32 UAcknowsManagerComponent::GetSpecialSpeakerID(EnumAcknowSpeaker Speaker) {
    return 0;
}

EnumAcknowSpeaker UAcknowsManagerComponent::GetSpecialSpeakerEnum(int32 _SpeakerID) {
    return EnumAcknowSpeaker::NONE;
}

FString UAcknowsManagerComponent::GetSpeakerName(int32 _SpeakerID) const {
    return TEXT("");
}

int32 UAcknowsManagerComponent::GetSpeakerIDByEnum(EnumAcknowSpeaker Speaker) const {
    return 0;
}

FAssignedAcknow UAcknowsManagerComponent::GetPendingAcknow(int32 _WaitForSpeakerID, UAcknow_DataAsset* _WaitForAsset) const {
    return FAssignedAcknow{};
}

int32 UAcknowsManagerComponent::GetNextGuestSpeakerID() {
    return 0;
}

int32 UAcknowsManagerComponent::GetMaekoSpeakerID() {
    return 0;
}

int32 UAcknowsManagerComponent::GetHunsletSpeakerID() {
    return 0;
}

int32 UAcknowsManagerComponent::GetHarperSpeakerID() {
    return 0;
}

int32 UAcknowsManagerComponent::GetDanielSpeakerID() {
    return 0;
}

FAcknowVariants UAcknowsManagerComponent::GetDamageTypeAcknow(const FDamageResultStruct& _Damage) {
    return FAcknowVariants{};
}

FAcknowVariants UAcknowsManagerComponent::GetDamageAcknow(const FDamageResultStruct& _Damage) {
    return FAcknowVariants{};
}

TArray<UAcknow_DataAsset*> UAcknowsManagerComponent::GetCoolingDownAcknows() {
    return TArray<UAcknow_DataAsset*>();
}

int32 UAcknowsManagerComponent::GetComputerVoiceSpeakerID() {
    return 0;
}

int32 UAcknowsManagerComponent::GetAPCPilotSpeakerID() {
    return 0;
}

int32 UAcknowsManagerComponent::GetActiveSpeakerID(UAcknow_DataAsset* _AcknowAsset) const {
    return 0;
}

FAssignedAcknow UAcknowsManagerComponent::GetActiveAcknow(int32 _SpeakerID) const {
    return FAssignedAcknow{};
}

void UAcknowsManagerComponent::FlushSubtitleQueue() {
}

void UAcknowsManagerComponent::DismissNarrativeDialogue(const FAcknowsSequence& _NarrativeDialogue, bool _bWithFade, bool _CallFinish) {
}

void UAcknowsManagerComponent::ClearNarrativeDialogues() {
}

void UAcknowsManagerComponent::BP_TryPlayAcknow(int32 _SpeakerID, UAcknow_DataAsset* _AcknowAsset, int32 _WaitForSpeakerID, bool _bBypassAbleToSpeakQuery) {
}

void UAcknowsManagerComponent::BindToPlaybackFinished(UAcknow_DataAsset* _AcknowAsset, FDynDelegate_AcknowsManager_PDA_int32 _Delegate) {
}

void UAcknowsManagerComponent::AddAcknowSpeaker(AHumanoid* _Humanoid) {
}


