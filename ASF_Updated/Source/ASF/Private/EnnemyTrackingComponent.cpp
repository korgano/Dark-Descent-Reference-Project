#include "EnnemyTrackingComponent.h"

UEnnemyTrackingComponent::UEnnemyTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SavedElapsedTime = 0.00f;
    this->Systemic = NULL;
    this->PostEncounterStatus = EnumSquadStatus::TRACKED;
    this->ShowTrackOnMap = true;
    this->TrackingComponentDataAsset = NULL;
    this->GameState = NULL;
    this->bIsUnderAttack = false;
    this->bResetTrackRadius = true;
    this->StartTime = 0.00f;
    this->StartTime_Real = 0.00f;
}

void UEnnemyTrackingComponent::TrackTimerCallback() {
}

void UEnnemyTrackingComponent::TrackLeader(bool _LeaderConstantTracking) {
}

void UEnnemyTrackingComponent::StopTrack() {
}

void UEnnemyTrackingComponent::StartTrack() {
}

void UEnnemyTrackingComponent::SetFactionSystemic(UFactionSystemic* FactionSystemic) {
}

void UEnnemyTrackingComponent::OnPhaseChanged(UFactionSystemic* _Systemic, const FGameplayTag& _OldPhase, const FGameplayTag& _NewPhase) {
}

void UEnnemyTrackingComponent::OnFactionSystemicInitialized(ATMEventSystem* EventSystem, UFactionSystemic* FactionSystemic) {
}

void UEnnemyTrackingComponent::OnEventSystemSet(AASFGameModeBase_TacticalMode* GameMode, ATMEventSystem* EventSystem) {
}

bool UEnnemyTrackingComponent::IsTracked() const {
    return false;
}

bool UEnnemyTrackingComponent::IsSpotted() const {
    return false;
}

void UEnnemyTrackingComponent::InitTrackingComponent(UEnnemyTrackingSystem* _TrackingSystem, UEnemyTracking_DataAsset* _TrackingComponentDataAsset) {
}

FVector UEnnemyTrackingComponent::GetTrackingLocation() {
    return FVector{};
}

UEnemyTracking_DataAsset* UEnnemyTrackingComponent::GetTracking_DataAsset() const {
    return NULL;
}

float UEnnemyTrackingComponent::GetTrackElapsedTimeDelta() const {
    return 0.0f;
}

float UEnnemyTrackingComponent::GetTrackElapsedTime() const {
    return 0.0f;
}

float UEnnemyTrackingComponent::GetTrackDuration() const {
    return 0.0f;
}

FVector UEnnemyTrackingComponent::GetLeaderPosition() {
    return FVector{};
}

bool UEnnemyTrackingComponent::GetLeaderConstantTracking() {
    return false;
}

float UEnnemyTrackingComponent::GetCurrentTrackRadius() {
    return 0.0f;
}

void UEnnemyTrackingComponent::EnemyAttackStop(UEnnemyTrackingSystem* _EnnemyTrackingSystem, AASFCharacter* _EnemyTracking) {
}

void UEnnemyTrackingComponent::EnemyAttackStart(UEnnemyTrackingSystem* _EnnemyTrackingSystem, AASFCharacter* _EnemyTracking) {
}


